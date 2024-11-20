#include<stdio.h>
#include<String.h>

int main()
{
    char Arr[] = {'H','e' , 'l','l','o','\0'};

    char Brr[] = "Hello";

    printf("%d\n", sizeof(Arr));
    printf("%d\n", sizeof(Brr));

    printf("Lenfgth of string lis : &d\n",strlen(Arr));
    printf("Lenfgth of string lis : &d\n",strlen(Brr));


    return 0;
}