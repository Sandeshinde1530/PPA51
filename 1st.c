#include <stdio.h>

int main()
{

    double No  = 3.14;
    double *ptr = &No;
     

    printf("%ul\n",No);
    printf("%ul\n",&No);
    printf("%ul\n",ptr);
    printf("%ul\n",*ptr);
}