#include "main.h"

/**
 * array_range -  an array of integers
 * @min: minimum value
 * @max: maaximum value
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int x, size = (max - min) + 1;
	int *p;

	if (min > max)
		return (NULL);

	p = (int *) malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		p[x] = min;
		min++;
	}
	return (p);
}
