#include "lists.h"

/**
 * This function returns the number of elemrnts a list has.
 * Returns a number elements
 * n represents total count
 */
size_t listint_len(const listint_t *h)
{
    size_t n = 0;

    while (h != NULL)
    {
        n++;
        h = h->next;
    }

    return n;
}
