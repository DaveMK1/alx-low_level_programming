#include "search_algos.h"

/**
 * recursive_search - runs the binary search
 * @array: input array
 * @value: value to be searched for
 * @start: starting pointer
 * @end: ending pointer
 * Return: index of the number
 */
int recursive_search(int *array, int value, int start, int end)
{
	int middle = 0, temp = start;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	while (temp <= end)
	{
		printf("%d", array[temp]);
		if (temp != end)
			printf(", ");
		temp++;
	}

	printf("\n");
	middle = (end + start) / 2;

	if (array[middle] == value && array[middle - 1] != value)
		return (middle);

	else if (array[middle] < value)
		start = middle + 1;
	else
		end = middle;

	return (recursive_search(array, value, start, end));
}

/**
 * advanced_binary - performs binary search
 * to find index of the number
 * @array: input array
 * @size: array size
 * @value: value to be searched for
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1;

	if (array == NULL)
		return (-1);

	return (recursive_search(array, value, start, end));
}
