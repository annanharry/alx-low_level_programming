#include "main.h"
/**
 * _islower - 1 lowercase, 0 not
 * @c: char type letter
 * Return: 1 lower, 0 not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
