/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1,m2;

  //getting user inputs
  printf("Enter 1st subject marks: ");
  scanf("%d", &m1);
  printf("Enter 2nd subject marks: ");
  scanf("%d", &m2);

  //printing output
  printf("Average marks: %.2f" , (m1 + m2) / 2.0);
  
  return 0;
}

