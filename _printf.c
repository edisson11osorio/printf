#include "main.h"
/**
*_printf - function  that prints all.
*@format: argument
*Return: len
*/
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	int (*get)(va_list);
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
		}
		if (format[i] == '%' && format[i + 1] == '\0')
			return (len);
		if (!format[i])
			return (len);
		get = get_op_print(&format[i + 1]);

		if (get != NULL)
		{
			len = len + get(argm);
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
