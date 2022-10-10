#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	int swap = 1;
	size_t i;

	if (array == NULL || size < 2)
		return;

	while (swap)
	{
		swap = 0;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
	}
}
