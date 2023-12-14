#include "search_algos.h"

/**
 * jump_search - searches through an array using jump search algorithm
 * @array: array to be used for the search algorithm
 * @size: size of the array
 * @value: number to be searched in the array
 *
 * Return: Always EXIT_SUCCESS
*/
int jump_search(int *array, size_t size, int value)
{
	int i, ub, lb, num;

	if (!array)
		return (-1);

	num = (int)sqrt(size);

	for (ub = 0; ub <= size;)
	{
		printf("Value checked array[%d] = [%d]\n", ub, array[ub]);

		if (array[ub] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", lb, ub);
			for (i = ub; i >= lb; i--)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);

			}
		}

		else if (array[ub] == value)
			return (ub);

		lb = ub;
		ub += (num);
	}
	return (-1);
}
