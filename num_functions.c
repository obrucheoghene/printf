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
	long int n = va_arg(list, long int);
	int len = 0;


	/* if n is a negative number */
	if (n < 0)
	{
		_putchar('-');
		len++;
		n *= -1;
	}

	return (len + _rec_print_num(n));
}



/**
 * _print_bin - print binary
 *
 * @list: variadic list
 *
 * Return: lenght of bin printed
 */
int _print_bin(va_list list)
{
	int n = va_arg(list, int);
	unsigned int nb;
	int len = 0;

	/* if n is a negative number */
	if (n < 0)
		nb = n * -1;

	return (len + _rec_print_bin(nb));
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
		_putchar(n + '0');
		return (1);
	}
	len = _rec_print_num(n / 10);
	_putchar((n % 10) + '0');
	return (1 + len);
}



/**
 * _rec_print_bin - print numbers
 *
 * @n: print numbers
 *
 * Return: return total printed numbers
 */
int _rec_print_bin(unsigned int n)
{
	int len;

	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return (1);
	}
	len = _rec_print_bin(n / 2);
	_putchar((n % 2) + '0');
	return (1 + len);
}


