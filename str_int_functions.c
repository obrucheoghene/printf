#include "main.h"

/**
 * _putchar - print a character
 *
 * @c: character
 *
 * Return: number of character printed
 */
int _putchar(char *c)
{
	return (write(1, c, 1));
}


/**
 * _print_str - print string
 *
 * @s: string
 *
 * Return: lenght of string printed
 */
int _print_str(char *s)
{
	
	if (*s == '\0')
		return (0);
	_putchar(s);
	s++;
	return (1 + _print_str(s));
}


/**
 * _print_pct - print %
 *
 * @s: string
 *
 * Return: lenght of string printed
 */
int _print_pct(char *s)
{
	return (_putchar(s));
}


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
int _print_dec(char *s)
{
	int n = atoi(s);
	int len = 0;
	/* if n is a negative number */
	if(n < 0)
	{
		putchar('-');
		len++;
		n *= -1;
	}

	return (len + _print_num(n));
}


