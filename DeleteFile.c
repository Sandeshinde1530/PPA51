#include<stdio.h>
// #include<io.h>
#include<fcntl.h>
// #include<unistd.h>

int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file name that you want to Delete : \n");
    scanf("%s",FileName);

    unlink(FileName);
    
    return 0;
}