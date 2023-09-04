#include"main.h"
#include<stdlib.h>
/**
 * _memcpy - Copies a specified number of bytes from one memory area to another.
 *
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n && src[i] != '\0'; i++) 
    {
        dest[i] = src[i];
    }

    return dest;
}
