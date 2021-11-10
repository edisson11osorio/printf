#include "main.h"

/**
*get_op_print- select the correct function
*@format: pointer.
*Return: pointer
*/
int (*get_op_print(const char *format))(va_list)
{
	int i;
	print_t prints[] = {
		{"c", print_c},
		{"i", print_i},
		{"d", print_d},
		{"s", print_s},
		{"%%", print_percent},
		{NULL, NULL}};
	for (i = 0; prints[i].t; i++)
		if (*format == *(prints[i].t))
		{
			return ((prints[i].f));
		}
	return (NULL);
}
