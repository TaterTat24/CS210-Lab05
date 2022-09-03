/** lab05functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 5
* Purpose: Learn function prototypes, user-defined functions,
*          return values, and parameters.
* ===========================================================
*/
#include "lab05functs.h"
#include <stdio.h>
#include <math.h>

double degreesToRadians(float angleInDegrees){
     double radians = angleInDegrees * (M_PI/180);
     return radians;
}

void printLine(int angleInDegrees){
    double radians = degreesToRadians(angleInDegrees);
    printf("%2d\t%4.3f\t%4.3f\n", angleInDegrees, sin(radians), cos(radians));
}