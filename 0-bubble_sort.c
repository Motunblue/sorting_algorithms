#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int c, flag = 0;
	size_t i;

	while (1)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				c = array[i];
				array[i] = array[i + 1];
				array[i + 1] = c;
				flag = 1;
	 			print_array(array, size);

			}	
		}
		if (flag == 0)
			break;
	}
}
