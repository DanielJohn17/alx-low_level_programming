#include "search_algos.h"

/**
 * linear_search - searches for a vlaue using linear algorithm
 * @array: array to be used for the search algorithm
 * @size: size of the array
 * @value: number to be searched in the array
 *
 * Return: index of the value or -1 in failure
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
