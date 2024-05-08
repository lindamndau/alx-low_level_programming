#include <search_algos.h>
/**
 *@int binary_search - function searches for a value in a sorted array of integers using the Binary search algorithm
 *Returns Value of index(SUCCESS!)
 *Returns -1 (FAILURE)
 */
int binary_search(int *array, size_t size, int value)
{
	int lowest = array[0];
	int high = 0;
	int i = 0;
	for(;i < size; i++)
	{
		if(high < array[i])
		{
			high = array[i];
		}
	
		while(lowest <= high)
		{
			int mid = lowest + (high - lowest)/2;
			if(array[mid] == value)
			{
				return mid;
			}
			if(array[mid] < x)
			{
				lowest = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
	return i;
	}
	return -1;
}	
