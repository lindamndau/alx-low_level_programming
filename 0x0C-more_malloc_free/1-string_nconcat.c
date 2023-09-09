#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * This function concatenates two strings 
 * The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	for(i = 0; i != '\0'; i++);
	for(j = 0; j != '\0', j++)
	{
		for(s2[j] = 0; s2[j] < n; s2[j]++)
		{
			if(n >= s2[j])
			{
				*s2 = s2[j];
			}
			else if(n < s2)
			{
				;
			}
		}	
	s1 =(char *)malloc(n * sizeof(char));
	if(s1 == NULL)
	{
		return('\0');
	}
	*s1 = s1[i] + s2[j];
	free(s1);
	return(*s1);
	}
	return(NULL);
}
	
