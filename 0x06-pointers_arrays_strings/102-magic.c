#include <stdio.h>

/**
 * main - a function that adds one line to the code, so that the program prints
 * a[2] = 98, followed by a new line.
 * Return: 98\n
 * Remember: you are not allowed to use a
 * you are not allowed to modify p, you are only allowed one statement
 * you are not allowed to code anything else than this line of code
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
