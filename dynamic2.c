#include<stdio.h>   // standard input output
#include<stdlib.h>  //standard library

int main()
{
    int *ptr = NULL;

    // step 1 = allocate the memory
    ptr = (char *)malloc(5 * sizeof(int));

    // step 2 = use the memory

    // step 3 = deallocate the memory
    free(ptr);

    return 0;
}