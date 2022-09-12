#include "main.h"
/**
 * print_sign - sign of a number
 * @n: type int can be negative or positive
 * Description: print +, 0, -
 * Return: 1 if +ve and 0 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
