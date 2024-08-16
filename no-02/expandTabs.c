#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <n>\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\t') {
            for (int i = 0; i < n; i++) {
                putchar(' ');
            }
        } else {
            putchar(ch);
        }
    }
    return 0;
}

