#include "main.h"
/**
 * main - This function compares two strings
 * It takes string1 and string2 as input parameters
 * it compares strings by each charactar
 * Returns : integer value if string are equal 0, if string1 is lexicographically less than str2, it returns a negative value.If str1 is lexicographically greater than str2, it returns a positive value.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, c;
	for(; s1[i] != '\0'; && s2[j] != '\0'; i++, j++)
	{
		c = (s1[i] - s2[j]);
	}
	if(c == 0)
	{
		return(0);
	}
	else 
		return (c);
}
