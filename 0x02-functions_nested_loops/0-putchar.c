#include "main.h"
/**
 * main - print "_putchar"
 * Description: not using the libraries
 * Return: 0
 */
int main(void)
{
	char toprint[] = "_putchar";
	int i = 0;

	while (toprint[i] != '\0')
	{
		_putchar(toprint[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
