#include<stdio.h>// standard input output
#include<stdlib.h>// standard library

int main()
{
    int *ptr = NULL;
    ptr =(int *)malloc(5 * sizeof(int));

    ptr = (int * )realloc(ptr,7 * sizeof(int));     //case 1

    ptr = (int * )realloc(ptr,3 * sizeof(int));     //case 2

    return 0;
}


                          

