#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring that consists
 *            of characters found in another string.
 *
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of 's'
 *         which consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	  unsigned int count = 0; /* Initialize a count for matching characters */

    while (*s != '\0')
    {
        char *a = accept; /* Reset the accept pointer for each character in s */
        while (*a != '\0')
        {
            if (*s == *a)
            {
                count++;
                break;
            }
            a++;
        }
        if (*a == '\0')
        {
            break; /* Break the loop when no match is found in accept */
        }
        s++;
    }

    return count;
}
