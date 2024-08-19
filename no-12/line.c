#include "line.h"
#include <stdlib.h> // For malloc and free
#include <stdio.h> // For sprintf

struct line_struct {
	float slope;
	float y_intercept;
};

line line_create(float slope,float y_intercept) {
    line new_line = malloc(sizeof(struct line_struct));
    if (new_line == NULL) {
        return NULL; // Handle memory allocation failure
	}
	new_line->slope = slope;
    new_line->y_intercept = y_intercept;
    return new_line;
	// Replace this with code to create a new line "object" and return a pointer to that object
	// The returned line should have a slope and y_intercept, as specified in the arguments.
}

line line_from_coords(coord from,coord to) {	
	if (coord_getx(from)== coord_getx(to)){
		return NULL;
	}// Return NULL if both from and to have the same x coordinate (which would make the slope infinity)
	
	float slope= (coord_gety(to)-coord_gety(from))/(coord_getx(to)-coord_getx(from));
    float y_intercept = coord_gety(from) - slope * coord_getx(from);
	return line_create(slope, y_intercept); 
	// Replace this with code to create a enw line "object" and return a pointer to that object
	// The returned line should go through both the from and to coordinates specified in the argument
}

coord line_intersect(line l1,line l2) {
	if (l1->slope == l2->slope){
		return NULL;
	}// Return NULL if lines l1 and l2 have the same slope. They are parallel and never intersect
	float x_intersect = (l2->y_intercept - l1->y_intercept) / (l1->slope - l2->slope);
	float y_intersect = ((l1->slope * x_intersect) + l1->y_intercept);	
	return coord_create(x_intersect, y_intersect); // Replace with code to return a new coordinate where lines l1 and l2 intersect
}

char * line_format(line ln) {
	static char buff[60];
	if (ln == NULL) return "NULL";
	sprintf(buff, "y = %fx + %f", ln->slope, ln->y_intercept);

	
	
	return buff; // Replace with code to return the pointer to a string that contains the formatted description of a line.
	// If ln is NULL, return "NULL"
	// The result should be in the form: "y = <m>x + <b>", 
	// where <m> and <b> are replaced by the floating point representation (%f)
	// of the slope and y-intercept of the line.
	// You may use a static char buffer (see coord_format for an example) to hold the
	// result, based on the assumption that the result will be used before line_format is called again.
}

void line_delete(line ln) {
	if (ln != NULL) free(ln);
	// Add code to free any memory consumed by the ln line "object"
}