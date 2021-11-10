#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct print - Struct print
 *
 * @t: The operator
 * @f: The function associated
 */
typedef struct print
{
char *t;
int (*f)(va_list);
}
print_t;
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_op_print(const char *format))(va_list);
int print_decimal(va_list argument);
int print_string(va_list argument);
int print_integer(va_list argument);
int print_percent(va_list argument);
int print_char(va_list argument);
int print_c(va_list c);
#endif
