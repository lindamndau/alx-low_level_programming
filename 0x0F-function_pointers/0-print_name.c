#include "function_pointers.h"
/**
 * This function conditionally calls another function with a specified name.
 *
 * @param name: A pointer to a string, representing the name to be checked.
 * @param f: A function pointer to the function to be called.
 */
{
	if(name == NULL)
	{
		return;
	}
	f(name);
}
