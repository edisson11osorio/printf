#include "main.h"



int my_atoi(char *srt)
{
  int res = 0;
 
  for (int i = 0; srt[i] != '\0'; i++)
      res = res * 10 + srt[i] - '0';
      
  return (res);
}

/**
* print_integer - print an integer number
* @argument: argument
* Return: 1
*/
int print_integer(va_list argument)
{
    int number;
     
	number = va_arg(argument, int);





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
