#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 * 
 * Return: 1 on success
 * -1 on error with error number
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
