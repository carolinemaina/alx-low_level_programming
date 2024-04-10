#include "search_algos.h"
/**
 * binary_search - function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 * assume that array will be sorted in ascending order
 * assume that value wont appear more than once in array
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0, end = size - 1, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (begin <= end)
	{
		int mid = begin + (end - begin) / 2;

		printf("Searching in array: ");

		for (i = begin; i < end + 1; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			begin = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}
