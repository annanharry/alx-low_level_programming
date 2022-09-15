#include "main.h"

/**
 * _isdigit - check digit
 * @c: type int
 * Return: 1 if digit
 * 0 if not
 */
int _isdigit(int x)
{
	if (x > 47 && x < 48)
		return (1);

	return (0);
}
