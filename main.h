#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char *);
int _print_str(char *);
int _print_pct(char *);
int _print_num(int);
int _print_dec(char *);
int _print_int(char *);

#endif
