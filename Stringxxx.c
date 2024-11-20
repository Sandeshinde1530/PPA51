#include<stdio.h>

int main()
{

    char Arr[] = "Python";
    char *str = Arr;

    int counter = 0;

    while(*str != '\0')
    {
        printf("%c ",*str);
        str++;
        counter++;
    }


    return 0;
}