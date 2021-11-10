#include "main.h"
/*
* print_i - print an integer number
*
* return: 1
*/
int print_i(va_list i)
{
	printf("%c", va_arg(i, int));
	return (1);
}
/*
* print_c - print a char
*
* return: 1
*/
int print_c(va_list c)
{
	char chg = (char)va_arg(c, int);

	_putchar(chg);
	return (1);
}
/*
* print_d - print a dec
*
* return: 1
*/
int print_d(va_list d)
{
	printf("%c", va_arg(d, int));
	return (1);
}

/*
* print_s - print a string
*
* return: i
*/

int print_s(va_list s)
{

	int print_s(va_list s);
	{
		int i = 0;
		char *str = va_arg(s, char *);

		if (!str)
			str = "(null)";
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}
}
/*
* print_percent - print an integer number
*
* return: 1
*/
int print_percent(va_list per)
{
	(void)(per);
	_putchar('%');
	return (1);
}