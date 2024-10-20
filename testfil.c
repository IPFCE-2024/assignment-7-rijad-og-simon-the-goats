#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "taylor_sine.h"


#define pi 3.14159265358979323846

int main (void){
double angle1 = pi/2;
  double test1 = sin(angle1);
  printf("result of sin(pi/2) is: %f", test1);

    double vores_sin = taylor_sine(angle1, 15);
    printf("\nVores funktion af sin(pi/2) is: %f\n\n", vores_sin);

  double angle2 = pi/4;
  double test2 = sin(test2);
  printf("result is: %f", test2);

    double vores_sin2 = taylor_sine(angle2, 11);
    printf("\nVores funktion giver os veardien: %f\n\n", vores_sin2);

  double angle3 = pi*2;
  double test3 = sin(test3);
  printf("result is: %f\n", test3);

    double vores_sin3 = taylor_sine(angle3, 11);
    printf("\nVores funktion giver os veardien: %f\n", vores_sin3);

 return 0;
}


