#include<stdio.h>

/**
 * main - Entry point
 * Description : 'This program prints the size of
 * various types on the computer
 * Return : Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n", (long unsigned)sizeof(char));
printf("Size of a int: %lu byte(s)\n", (long unsigned)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (long unsigned)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (long unsigned)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (long unsigned)sizeof(float));
return (0);
}
