#include<stdio.h>
// #include<io.h>
#include<fcntl.h>

int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",FileName);

    FD = open(FileName,O_RDWR);
    if(FD == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("File is succesfully Opened with FD : %d\n",FD);
    }

    close(FD);
    return 0;
}
//read Mode         O_RDONLY
//Write mode        O_WRONLY
//Read +write mode  O_RDWR