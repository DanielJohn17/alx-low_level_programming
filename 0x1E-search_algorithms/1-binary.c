#include "search_algos.h"

/**
 * binary_search - searching through an array using binary search method
 * @array: array to be used for the search algorithm
 * @size: size of the array
 * @value: number to be searched in the array
 *
 * Return: Always EXIT_SUCCESS
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, lb, ub = (int)size;

	if (array == NULL)
		return (-1);

	for (lb = 0, ub = size - 1; ub >= lb;)
	{
		printf("Searching in array: ");
		for (i = lb; i < ub; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (lb + ub) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lb = mid + 1;
		else if (array[mid] > value)
			ub = mid - 1;
	}
	return (-1);
}
