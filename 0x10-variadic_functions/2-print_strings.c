#include "variadic_functions.h"
#include <stdarg.h>
/**
 * This function prints strings, followed by a new line.
 * @separator - is the string to be printed between the strings
 * @n - is the number of strings passed to the function
 * If separator is NULL, doesnt print
 * Print nil if one string is NULL
 * New line at end of function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

