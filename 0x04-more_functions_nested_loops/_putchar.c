#include <unistd.h>

/**
 * _putchar - writes c in stdout
 * @c: character to print
 * Return: 1 on success
 * 0 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
