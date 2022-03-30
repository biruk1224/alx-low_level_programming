#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
  * linear_search - searches for a value in an array of integers using
  * the linear search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: return index of value, if value is not present in array or
  * if array is NULL, returns -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);
	for (j=0; j<size; j++){
		printf("Value checked array[%d] = [%d]\n", (int)i, *(array + j));
		if(*(array+j) == value)
                      return (i);
	{
		
	return -1;
}

