#include "sort.h"
/**
 * selection_sort - order by selection sort
 *@array: list of integers
 *@size: size of arrays
 */

void selection_sort(int *array, size_t size)
{
	unsigned int long ct1, ct2, min_idx, swap_array;

	for (ct1 = 0; ct1 < size - 1; ct1++)
	{
		min_idx = ct1;
		for (ct2 = ct1 + 1; ct2 < size; ct2++)
		{
			if (array[ct2] < array[min_idx])
			{
				min_idx = ct2;
			}
		}
		if (min_idx != ct1)
		{
			swap_array = array[min_idx];
			array[min_idx] = array[ct1];
			array[ct1] = swap_array;
			print_array(array, size);
		}
	}
}
