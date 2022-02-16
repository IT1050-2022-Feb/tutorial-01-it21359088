/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float x,y,z;

  printf("Input marks of subject 1: ");
  scanf("%f", &x);

  printf("Input marks of subject 2: ");
  scanf("%f", &y);

  z=(float)(x+y)/2;
  printf("average: %f", z);
  return 0;
}

