#include <stdio.h>
/**
 * main - main block
 * Description: print single digit bse 10 using putchar
 * Return: 0:
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
