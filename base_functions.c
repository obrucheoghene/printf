#include "main.h"

/**
 * _print_bin - print binary
 *
 * @list: variadic function
 *
 * Return: lenght printed
 */
int _print_bin(va_list list)
{
	int n = va_arg(list, int);
	int a[10];
	int i;
	int len = 0;

	if (n < 0)
		n *= -1;
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	for (i = i - 1; i >= 0; i--)
		len += _putchar(a[i] + '0');
	return (len);
}

