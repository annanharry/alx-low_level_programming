#include <stdio.h>
/*
 * main - main block
 * Description: print lowercase leters except 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	car c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
