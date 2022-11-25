#include "main.h"

/**
 * _printf - printf function
 *
 * @format: format to print
 * @...: variadic args
 *
 * Return: Number of strings printed
 */

int _printf(const char *format, ...)
{
	int len = 0;
	va_list list;

	/* return -1 if format is NULL */
	if (format == NULL)
		return (-1);

	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			/* return -1 if immediately after % is null character - \0 */
			if (*format == '\0')
				return (-1);
			/* check if function pointer returns null */
			if (get_fun(*format) != NULL)
				len += (get_fun(*format))(list);
			else if (*format == '%')
				len += _putchar('%');
			else
			{
				len += _putchar(*(--format));
				len += _putchar(*(++format));
			}
		}
		else
		{
			len += _putchar(*format);
		}
		format++;
	}

	va_end(list);
	return (len);

}


/**
 * get_fun - function pointer
 *
 * @c: character -> format specifer
 *
 * Return: print function
 */
int (*get_fun(const char c))(va_list)
{
	print_fun printfun[] = {
		{'c', _print_cha},
		{'s', _print_str},
		{'d', _print_dec},
		{'i', _print_dec},
		{'\0', NULL}
	};
	int i = 0;

	while (printfun[i].fs != '\0')
	{
		if (printfun[i].fs == c)
			return (printfun[i].pfun);
		i++;
	}

	return (NULL);

}
