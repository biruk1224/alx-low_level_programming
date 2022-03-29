#include <stddef.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value){
       size_t counter;
        
        for(counter=0;counter<size;counter++){

     printf("Value checked array[%ld] = [%d]\n",counter,*(array+counter));



             if(*(array+counter) == value){
                return counter;

             }

            


	}
	return -1;
}	
