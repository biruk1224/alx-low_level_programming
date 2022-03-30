#include <stduio.h>
#include <stdlib.h>
#include "search_algos.h"
int linear_search(int *array, size_t size, int value){
      size_t i;
	
	if(array == NULL){return (-1);}
	
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
