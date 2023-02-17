#include<stdio.h>

/**
 * main - Entry point
 * Description : 'This program prints the size of
 * various types on the computer
 * Return : Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %ul byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %ul byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %ul byte(s)\n", (long unsigned long)sizeof(long int));
printf("Size of a long long int: %ul byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %ul byte(s)\n", (unsigne long)sizeof(float));
return (0);
}
