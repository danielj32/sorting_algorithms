#include "sort.h"
/**
 *swapping - swap two numbers
 *@array: list of integeers
 *@one: first data of array
 *@last: last data of array
 *@size: size of array
 */

void swapping(int *array, int one, int last, size_t size)
{
	unsigned int aux;

	if (array[one] != array[last])
	{
		aux = array[one];
		array[one] = array[last];
		array[last] = aux;
		print_array(array, size);
	}
}

/**
 * partition - partition to a pivot
 * @array: data sort input
 * @l: lefth
 * @r: right
 * @size: size input
 * Return: count
 */
int partition(int *array, int l, int r, size_t size)
{
	int ct1 = l, ct2, pivot  = array[r];

	for (ct2 = l; ct2 <= r; ct2++)
	{
		if (array[ct2] < pivot)
		{
			swapping(array, ct1, ct2, size);
			ct1++;
		}
	}
	swapping(array, ct1, r, size);

	return (ct1);
}

/**
 * aux_quick_sort -  aux function quick sort algorithm
 * @array: list of integrers
 * @l: l to the pivot
 * @r: r to the pivot
 * @size: size input
 */
void aux_quick_sort(int *array, int l, int r, size_t size)
{
	unsigned int pivot;

	if (l < r)
	{
		pivot = partition(array, l, r, size);
		aux_quick_sort(array, l, pivot - 1, size);
		aux_quick_sort(array, pivot + 1, r, size);
	}
}

/**
 * quick_sort - quick sort the array.
 * @array: sort data
 * @size: size input
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	aux_quick_sort(array, 0, size - 1, size);
}
