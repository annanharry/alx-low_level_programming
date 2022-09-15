#include "main.h"

/**
 * _isupper - check uppercase characters
 * @c: int
 * Return 1: if uppercase
 * 0 if lowercase
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
