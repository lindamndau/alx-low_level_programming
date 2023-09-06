#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * This function concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory which contains the contents of s1, 
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *arr;
	while(s1 != '\0' && s2 != '\0')
	{
		if(s1 == '\0')
		{
			s1[]= "\0";
		}
		if(s2 == '\0')
		{
			s2[]= "\0";
		}
	*arr  =(char)malloc(s2 * sizeof(s1));
	*arr  = s1[i] + s2[j];
	i++;
	j++;
	if(*arr == '\0')
	{
		return('\0');
	}
	return(arr);
	}
}
