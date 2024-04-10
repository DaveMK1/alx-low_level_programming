#include "search_algos.h"

/**
  * my_binary_search - performs a binary search
  * to find the target value
  * @array: input array
  * @begin: starting index of the array to search
  * @end: ending index of the array to search
  * @value: value to search for
  * Return: index of the value, or -1 if not found
  */
int my_binary_search(int *array, size_t begin, size_t end, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (end >= begin)
	{
		printf("Searching in array: ");
		for (i = begin; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = begin + (end - begin) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else
			begin = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - performs an exponential
  * search to find the target value
  * @array: input array
  * @size: array size
  * @value: value to search for
  * Return: index of the value, or -1 if not found
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t j = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (j = 1; j < size && array[j] <= value; j = j * 2)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}

	right = j < size ? j : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", j / 2, right);
	return (my_binary_search(array, j / 2, right, value));
}
