#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	char *ret = s, *leetin = LEETIN, *leetout = LEETOUT;
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; leetin[i]; i++)
			if (*s == leetin[i])
				*s = leetout[i];
	}
	return (ret);
}
