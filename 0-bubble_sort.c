#include "sort.h"
/**
 * bubble_sort - Entry point
 *@array: array of integers
 *@size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int ct1, ct2, swap_array;

	if (size == NULL)
		return;

	for (ct1 = 0; ct1 < size - 1; ct1++)
		/* code */
		for (ct2 = 0; ct2 < size - 1; ct2++)
			if (array[ct2] > array[ct2 + 1])
			{
				swap_array = array[ct2];
				array[ct2] = array[ct2 + 1];
				array[ct2 + 1] = swap_array;
				print_array(array, size);
			}
}
