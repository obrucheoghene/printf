#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print_fun
 * @fs: format specifier
 * @pfun: print function ponter
 */
typedef struct print_fun
{
	char fs;
	int (*pfun)(va_list);
} print_fun

int _printf(const char *format, ...);
int _putchar(char c);

int (*get_fun(char c))(va_list);
int _print_cha(va_list);
int _print_str(va_list);
int _print_pct(va_list);
int _print_dec(va_list);
int _print_int(va_list);

/* print recursively */
int _rec_print_num(int);
int _rec_print_str(char*);

#endif
