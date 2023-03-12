#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*
*
*
*
*/

int main (int argc, char **argv)
{
if (argc != 2)
{	
	printf("Error");
	return (1);
}
	
int n;
int c = 0;
int r = 0;

n = atoi(argv[1]);
c = n / 25;
r = n % 25;
if (r == 0)
{
printf("%d", c);	
return (c);
}


c = c + r / 10;
r = r % 10;
if (r == 0)
{
printf("%d", c);
return (c);
}



c = c + r / 5;
r = r % 5;
if (r == 0)
{
printf("%d", c);
return (c);
}

c = c + r / 2;
r = r % 2;
if (r == 0)
{
printf("%d", c);
return (c);
}

c = c + r;


printf("%d", c);

return (c);
}
