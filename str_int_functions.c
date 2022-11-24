#include "main.h"

/**
 * _putchar - print a character
 *
 * @c: character
 *
 * Return: number of character printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _print_cha - print character
 *
 * @list: variable list 
 *
 * Return: lenght of string printed
 */
int _print_cha(va_list list)
{
	char val = va_arg(list, int);

	return (_putchar(val));
}



/**
 * _print_str - print string
 *
 * @list: variable list
 *
 * Return: lenght of string printed
 */
int _print_str(va_list list)
{
	char *val = va_arg(list, char*);
	return (_rec_print_str(val));
}


/**
 * _print_pct - print %
 *
 * @list: varaidic list
 *
 * Return: lenght of string printed
 */
/*int _print_pct(va_list list)
{
}*/


/**
 * print_num - print numbers
 * 
 * @n: print numbers
 *
 * Return: return total printed numbers
 */
int _print_num(int n)
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


/**
 * _print_dec - print decimal integer
 *
 * @s: string
 *
 * Return: lenght of integers printed
 */
int _print_dec(va_list list)
{
	int n = va_arg(list, int);
	int len = 0;
	/* if n is a negative number */
	if(n < 0)
	{
		putchar('-');
		len++;
		n *= -1;
	}

	return (len + _rec_print_num(n));
}




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
	return (1 + _rec_print_str(val));
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
	len = _rec_print_num(n / 10);
	putchar((n % 10) + '0');
	return (1 + len);
}


