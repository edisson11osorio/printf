#include "main.h"
/**
* print_integer - print an integer number
* @argument: argument
* Return: 1
*/
int print_integer(va_list argument)
{
	printf("%c", va_arg(argument, int));
	return (1);
}
/**
* print_char - print a char
* @argument: argument
* Return: 1
*/
int print_char(va_list argument)
{
	char character = (char)va_arg(argument, int);

	_putchar(character);
	return (1);
}
/**
* print_decimal - print a dec
* @argument: argument
* Return: 1
*/
int print_decimal(va_list argument)
{
	printf("%c", va_arg(argument, int));
	return (1);
}

/**
* print_string - print a string
* @argument: argument
* Return: i
*/
int print_string(va_list argument)
{
	int i = 0;
	char *str = va_arg(argument, char *);

	if (!str)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
* print_percent - print a charcter %
* @argument: argument
* Return: 1
*/
int print_percent(va_list argument)
{
	(void)(argument);
	_putchar('%');
	return (1);
}
