#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdlib.h>
typedef struct fmt_t
{
	char *identifier;
	void (*f)(char *separator, va_list pa);
}ft;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(int c);
void print_a_char(char *separator, va_list args);
void print_a_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_char_ptr(char *separator, va_list args);

#endif
