#include "sort.h"
/**
 * shell_sort - Entry point
 *@array: list of integers
 *@size: size of array
 */

void shell_sort(int *array, size_t size)
{
	int tp;
	unsigned int j;
	unsigned int h = 0;

	unsigned int long i;

	if (size < 2)
		return;

	while (h <= size / 3)
		h = h * 3 + 1;

	while (h >= 1)
	{
		for (i = h; i < size; i++)
		{
			tp = array[i];
			for (j = i; j >= h && tp < array[j - h]; j -= h)
			{
				array[j] = array[j - h];
			}
			array[j] = tp;
		}
		h /= 3;
		print_array(array, size);
	}
}
