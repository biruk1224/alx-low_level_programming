#include "search_algos.h"
int linear_search(int *array, size_t size, int value){
      size_t i;
for (i = 0; (i < size) && (array); i++)
	{	if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}


	}
  	
     return (-1);   
}
