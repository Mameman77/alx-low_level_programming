#include "main.h"

/**
 * main - print the last digit of a number 
 *
 * Return: value of the last digit of a number
 */
int last_digit(int n)
{
int last;
	
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
