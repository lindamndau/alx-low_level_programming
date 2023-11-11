#include "variadic_functions.h"
#include <stdio.h>
/**
 * @pa - prints anything
 * @format holds all specifiyer type arguments
 *
 * 
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	int i, j;
	ft  fmt_t[] = {
	{"c", print_char},
      	{"i", print_int},
      	{"f", print_float},
      	{"s", print_string},
      	{'\0', NULL}
	};
	char *separator = "";
	va_start(pa, format);
	while (format != NULL && format[i])	
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *fmt_t[j].identifier)
			{
				fmt_t[j].f(separator, pa);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(pa);
	printf("\n");
}
/**
  * print_a_char - Prints a character of char type
  * @separator: The separator of the character
  * @pa: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_char(char *separator, va_list pa)
{
	printf("%s%c", separator, va_arg(pa, int));
}
/**
  * print_a_integer - Prints a character of integer type
  * @separator: The separator of the character
  * @pa: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_integer(char *separator, va_list pa)
{
	printf("%s%i", separator, va_arg(pa, int));
}
/**
  * print_a_float - Prints a character of float type
  * @separator: The separator of the character
  * @pa: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_float(char *separator, va_list pa)
{
	printf("%s%f", separator, va_arg(pa, double));
}
/**
  * print_a_char_ptr - Prints the content of pointer to char type
  * @separator: The separator of the character
  * @arg: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_char_ptr(char *separator, va_list pa)
{
	char *arg = va_arg(pa, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
