#include <stdio.h>

/**
* main - function that prints the name of the file it was compile from
*
* Return: 0
*/

int main(void)
{

	printf("%s\n", __BASE_FILE__);
	return (0);

}
