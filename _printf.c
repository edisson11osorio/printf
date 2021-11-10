#include "main.h"

/*
*_printf - function  that prints all.
*@format-argument
*Return: len
*/

int _printf(const char *format, ...)
{
    int i = 0, len = 0;
    int (*f)(va_list);
    va_list argm;
	va_start(argm, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		for (; format[i] != '%' && format[i] != '\0'; i++)
		{
			_putchar(format[i]);
			len++;
			if (format[i] == '%' && format[i + 1] == '\0')
			{
				return (-1);
			}
		}
		if (format[i] == '\0')
			return (len);
		f = get_op_print(&format[i + 1]);

		if (f != NULL)
		{
			len = len + f(argm);
			i = i + 2;
			continue;
		}
		_putchar(format[i]);
		len++;
		if (format[i + 1] == '%')
			i = i + 2;
		else
			i++;
	}
	va_end(argm);
	return (len);
}
