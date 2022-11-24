#include "main.h"


/**
 * _rec_print_str - print string
 *
 * @val: string
 *
 * Return: lenght of string printed
 */
int _rec_print_str(char *val)
{
	if (*val == '\0')
		return (0);
	_putchar(*val);
	val++;
	return (1 + _print_str(val));
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

	if(n / 10 < 1)
	{
		putchar(n + '0');
		return (1);
	}
	len = _print_num(n / 10);
	putchar((n % 10) + '0');
	return (1 + len);
}


