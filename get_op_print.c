#include "main.h"
<<<<<<< HEAD

/**
* get_op_print - select the correct function
* @format - pointer
* @va_list - pointer.
* Return:: pointer
=======
/**
*get_op_print- select the correct function
*@format: pointer.
*Return: pointer
>>>>>>> 86d321761d8e5642046e978ebdb0005e19fa14f9
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
