#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <time.h>

#define ASIZE 54
#define BSIZE 42
#define NHW 9
#define NLAB 12
#define NPRJ 4
#define NTST 2
#define NUMGRADES NHW+NLAB+NPRJ+NTST+1
#define NUM10GRADES NHW+NLAB
#define MAXSECT 100

char * gets(char *str); // To avoid C library problems
void getGrades(int grds[NUMGRADES][MAXSECT],int n);
void getAvgs(int grds[NUMGRADES][MAXSECT],int n);
void getAvg(int grds[NUMGRADES][MAXSECT],int student);
char * getUserLine();
void printGrades(int grds[NUMGRADES][MAXSECT],int n,char *names[]);

int aGrades[NUMGRADES][MAXSECT];
int bGrades[NUMGRADES][MAXSECT];
char retBufferArea[1024+4096];
char *retBuffer;

char *colNames[NUMGRADES] = {
	"HW00","HW01","HW02","HW03","HW04","HW05","HW06","HW07","HW08",
	"Lab01","Lab02","Lab03","Lab04","Lab05","Lab06","Lab07","Lab08","Lab09","Lab10","Lab11","Lab12",
	"Prj01","Prj02","Prj03","Prj04",
	"Tst01","Tst02",
	"AVG" };
char *aNames[ASIZE] = { 
	"Akanuma_Fu",
	"Alonzo_Benicio",
	"Antwi-Obeng_Kweku",
	"Baddam_Manika",
	"Brisport_Christian",
	"Bulger_Brendan",
	"Choi_Phillip",
	"Coburn_Abraham",
	"Costa_Phoenix",
	"Dang_Binh",
	"Deng_Henghui",
	"DiLillo_Troy",
	"Donaldson_Lela",
	"Eskenazi_Alex",
	"Fanchiotti_Ryan",
	"Flocos_Dorin",
	"Gallego_Ryan",
	"Garzon_Matthew",
	"Genovese_Nicholas",
	"Gray_Danielle",
	"Gunasekaran_Sanjit",
	"Janason_Joshua",
	"Kaderu_Dhruv",
	"Karahuseyin_Sinan",
	"Kim_Daniel",
	"Knittel_Jonathan",
	"Li_Derek",
	"Lu_Johnny",
	"Mendez_Emily",
	"Nagpal_Param",
	"Ouafik_Leena",
	"Palmer_Sydney",
	"Panchmia_Roman",
	"Patel_Het",
	"Patel_Vishil",
	"Pavon_Daniela",
	"Ponce_David",
	"Pronti_Michael",
	"Rahman_Rahat",
	"Rai_Sonia",
	"Rumreich_Frank",
	"Sadaf_Mohammed",
	"Sandison_Emma",
	"Shen-Costello_Andrew",
	"Smolenski_Obadiah",
	"Stout_Vaughn",
	"Suber_Gavin",
	"Sutera_Jack",
	"Thavee_Ally",
	"Tunney_Justin",
	"Ulgen_Omer",
	"Williams_Eli",
	"Yildirim_Elif",
	"Zheng_Edwin"
};
char *bNames[BSIZE] ={
	"Abali_Huseyin",
	"Abrenica_Blake",
	"Ahmed_Tajrean",
	"Cesur_Berkay",
	"Chen_Brian",
	"Deshpande_Samruddhi",
	"Diaz_Lucas",
	"Erikci_Korel",
	"Goodluck_Mackenzie",
	"Gunaydin_Ata",
	"Habib_Ayman",
	"Huang_Edward",
	"Jayasena_Seth",
	"Jules_Brianna",
	"Kabuto_Rick",
	"Kasimov_Mikail",
	"Lacey_Rachel",
	"Leung_Eric",
	"Li_Ryan",
	"Mazer_Max",
	"Medapati_Yashwanth",
	"Montes_Samuel",
	"Muirhead_Preston",
	"Nash_Mason",
	"Nguyen_Tina",
	"Okuyucu_Senih",
	"Oliveira_Fernando",
	"Ong_Yong",
	"Ortiz_Julian",
	"Phoo_Wut",
	"Redd_Chloe",
	"Robinson_Timothy",
	"Sunderhaft_Alexander",
	"Tapia_Jake",
	"Thorne_Lillian",
	"Todd_Rachel",
	"Valledolmo_Richard",
	"Wong_Jo",
	"Wong_Raphael",
	"Zheng_Evan",
	"Zheng_Tim",
	"Zhou_Danny"

};

FILE *txtFile;

int main(int argc, char ** argv) {
	char * secID;
	time_t t;

	long pagesize = sysconf(_SC_PAGESIZE);;
	setbuf(stdout,0);
	retBuffer=(char *)(((long)retBufferArea + pagesize-1) & ~(pagesize-1));
	if(mprotect(retBuffer, 1024, PROT_READ|PROT_EXEC|PROT_WRITE)) {
      printf("mprotect failed\n");
      return(1);
   }
   if (argc==1) srand((unsigned) time(&t));
   else {
   	unsigned int seed=atoi(argv[1]);
   	srand(seed);
	}
	getGrades(aGrades,ASIZE);
	getGrades(bGrades,BSIZE);
	getAvgs(aGrades,ASIZE);
	getAvgs(bGrades,BSIZE);

	printf("Choose section A or B: ");
	secID=getUserLine();
	printf("\n");

	if (secID[0]=='A') {
		printGrades(aGrades,ASIZE,aNames);
	} else if (secID[0]=='B') {
		printGrades(bGrades,BSIZE,bNames);
	} else {
		printf("Unable to determine which section you wanted.\n");
	}
	exit(0);
}

void getGrades(int grds[NUMGRADES][MAXSECT],int n) {
	int s,c;
	for(s=0; s<n; s++) {
		for(c=0;c<NHW;c++) 	grds[c][s] = 5+rand()%2;
		for(c=NHW; c<(NHW+NLAB); c++) grds[c][s] = 5+rand()%3;
		for(c=NHW+NLAB; c<(NHW+NLAB+NPRJ); c++) grds[c][s] = 53+rand()%7;
		for(c=(NHW+NLAB+NPRJ);c<(NHW+NLAB+NPRJ+NTST);c++) grds[c][s] = 54+rand()%8;
	}
}

void getAvgs(int grds[NUMGRADES][MAXSECT],int n) {
	for(int s=0; s<n; s++) {
		getAvg(grds,s);
	}
}

void getAvg(int grds[NUMGRADES][MAXSECT],int student) {
	int c;
	int sumHW,sumLab,sumProj,sumTest;
	int minProj;

	sumHW=sumLab=sumProj=sumTest=0;
	minProj=101;
	for(c=0;c<NHW;c++) 	sumHW+=grds[c][student];
	for(c=NHW; c<(NHW+NLAB); c++) sumLab+=grds[c][student];
	for(c=NHW+NLAB; c<(NHW+NLAB+NPRJ); c++) {
		sumProj+=grds[c][student];
		if (grds[c][student]<minProj) minProj=grds[c][student];
	}
	sumProj-=minProj; // Remove the lowest project grade
	for(c=(NHW+NLAB+NPRJ);c<(NHW+NLAB+NPRJ+NTST);c++) sumTest+=grds[c][student];
	float avg = 0.15 * (10.0 * (float)sumHW/NHW) +
				0.15 * (10.0 * (float)sumLab/NLAB) +
				0.20 * ((float)sumProj/(NPRJ-1)) +
				0.20 * ((float)sumTest/NTST);
	// So far, this is the average without participation and final exam
	avg=(100.0/70.0)*avg; // What is the average without participation and final
	grds[NUMGRADES-1][student] = avg; // Truncate the decimal
}


char * getUserLine() {
	char buffer[256];

	if (gets(buffer)) {
		memcpy(retBuffer,buffer,sizeof(buffer));
		return retBuffer;
	}
	return NULL;
}

void printGrades(int grds[NUMGRADES][MAXSECT],int n,char * names[]) {
	int s;
	printf(" %20s |","Student");
	for(int i=0;i<NUMGRADES-1;i++) printf("%5s|",colNames[i]);
	printf("| %3s |\n","AVG");
	printf("----------------------|");
	for(int i=0;i<NUMGRADES-1;i++) printf("-----|");
	printf("|-----|\n");
	for(s=0; s<n; s++) {
		printf(" %20s |",names[s]);
		for(int i=0;i<NUMGRADES-1;i++) printf(" %3d |",grds[i][s]);
		printf("| %3d |\n",grds[NUMGRADES-1][s]);
	}
	printf("----------------------|");
	for(int i=0;i<NUMGRADES-1;i++) printf("-----|");
	printf("|-----|\n");
}
