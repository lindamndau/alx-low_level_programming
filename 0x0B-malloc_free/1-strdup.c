#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * This function returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * The _strdup() function returns a pointer to a new string which is a duplicate of the string str
 * Memory for the new string is obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char str2;
	unsigned int n, i;
	if(str == '\0')
	{
		return(NULL);
	}
	if(str != '\0')
	{
		str2 = (char*)malloc(n * sizeof(*str));
		if(str2 == '\0')
		{
			return(NULL);
	
		for(i = 0; i < n; i++)
		{
			str2[i] = str;
		}
		}
		return(str2);
	}
	free(str2);
}
