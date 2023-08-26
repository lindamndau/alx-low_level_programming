#include "main.h"
/**
 * main - this function that changes all lowercase of a string to uppercase.
 * Returns: dest for uppercase and 1 failure
 */
char *string_toupper(char *)
{
	int i = 0;
       while(str[i] != '\0')
       {
	       if (str[i] >= 'a' && str[i] <= 'z')
	       {
		        str[i] -= ('a' - 'A');
	       }
	       i++;
       }
       return (str);
}
