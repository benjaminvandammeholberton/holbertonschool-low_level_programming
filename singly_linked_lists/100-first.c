#include <stdio.h>

__attribute__((constructor))
/**
 * before_main - function that prints something before running main function.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
