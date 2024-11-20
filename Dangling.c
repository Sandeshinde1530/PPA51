#include<stdio.h>

int main()
{
    int *p = NULL;

    p = (int *)malloc(5 * sizeof(int));

    free(p);

    //NOw P is a dangling pointer

    return 0;
}