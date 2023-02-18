#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * main - main function to generate random number
 *
 * Return: always 0 (success)
 *
 */

int main(void) 
{
   int n;

   srand(time(0));
   n = rand() - RAND_MAX / 2;

   if (n > 0) {
      printf("The number is positive.\n");
   }
   else if (n < 0) {
      printf("The number is negative.\n");
   }
   else {
      printf("The number is zero.\n");
   }

   return 0;
}

