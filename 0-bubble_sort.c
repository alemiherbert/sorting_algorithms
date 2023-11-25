#include "sort.h"

/**
 * swap_int - swap any two integers
 * @num1: pointer to the first integer
 * @num2: pointer to the second integer
*/
void swap_int(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * bubble_sort - an implementation of the bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		k = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				swap_int(&(*(array + j)), &(*(array + j + 1)));
				print_array(array, size);
				k = 1;
			}
		}
		if (k == 0)
			break;
	}
}
