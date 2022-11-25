#include "main.h"


/**
 * _print_dec - print decimal integer
 *
 * @list: variadic list
 *
 * Return: lenght of integers printed
 */
int _print_dec(va_list list)
{
	int n = va_arg(list, int);
	int len = 0;
	/* if n is a negative number */
	if (n < 0)
	{
		putchar('-');
		len++;
		n *= -1;
	}

	return (len + _rec_print_num(n));
}



/**
 * _rec_print_num - print numbers
 *
 * @n: print numbers
 *
 * Return: return total printed numbers
 */
int _rec_print_num(int n)
{
	int len;

	if (n / 10 < 1)
	{
		putchar(n + '0');
		return (1);
	}
	len = _rec_print_num(n / 10);
	putchar((n % 10) + '0');
	return (1 + len);
}


