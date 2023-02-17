#include<stdio.h>

/**
 * main - Entry point
 * Description : 'This program prints the size of
 * various types on the computer
 * Return : Always 0 (Success)
 */

int main (void)
{
printf("Size of a char: %d\n", (int)sizeof(char));
printf("Size of a int: %d\n", (int)sizeof(int));
printf("Size of a long int: %d\n", (int)sizeof(long int));
printf("Size of a long long int: %d\n", (int)sizeof(long long int));
printf("Size of a float:%d\n", (int)sizeof(float));
return (0);
}
