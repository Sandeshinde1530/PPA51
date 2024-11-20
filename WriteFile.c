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
        return -1;
    }
    else
    {
        printf("File is succesfully Opened with FD : %d\n",FD);
    }

    write(FD,"Marvellous Infosystems Pune",27);

    close(FD);
    return 0;
}