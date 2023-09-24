#include "sort.h"

/**
 * selection_sort - sort an array using the selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int x, y;
	size_t i, j, pos;

	if (size == 0 || size == 1)
		return;
	for (i = 0; i < size - 1; i++)
	{
		x = array[i];
		pos = 0;
		for (j = i + 1; j < size; j++)
		{
			if (x > array[j])
			{
				x = array[j];
				pos = j;
			}
		}
		if (pos)
		{
			y = array[i];
			array[i] = array[pos];
			array[pos] = y;
			print_array(array, size);
		}
	}
}
