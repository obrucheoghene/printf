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
	int i = 0;
	int len = 0;
	va_list arg_list;

	va_start(arg_list, format);


	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			
			if (*format == 'd')
			{
				len += _print_dec(arg_list);
			}
			else 
			{
				len += _print_str(arg_list);
			}
		}
		else
		{
			len += _putchar(*format);
		}
		format++;
	}

	putchar('\n');
	return (len);

}


