#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - main
 * Description: sum of multiples of 3 or 5 bellow 1024
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int total = 0;

	whilw (i < 1024)
	{
		if (i % 3 == 0)
			total +=i;
		else if (i % 5 == 0)
			total +=i;

		i++;
	}
	printf("%d\n", total);

	return (0);
}
