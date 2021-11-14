#include "main.h"

/**
* get_op_print - select the correct function
* @format: pointer
* Return: pointer
*/
int (*get_op_print(const char *format))(va_list)
{
	int i;
	print_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"%%", print_percent},
		{NULL, NULL}};
	for (i = 0; prints[i].t; i++)
		if (*format == *(prints[i].t))
		{
			return ((prints[i].f));
		}
	return (NULL);
}
