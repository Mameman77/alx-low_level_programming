#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
