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

	if (val == '\0')
		return (write(1, &val, 0));
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

	if (val == NULL)
		val = "(null)";
	return (_rec_print_str(val));
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
