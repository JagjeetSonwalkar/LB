// get the name of file from user and read whole file and display on it screen

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[10] = {'\0'};
    int iRet = 0;
    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    printf("Data from file is : \n");

    while((iRet = read(fd,Arr,10)) != 0)
    {
        write(1,Arr,iRet);
    }

    printf("\n");

    close(fd);

    return 0;
}

/*
    OUTPUT

    Please enter the file name that you want to open
    Jaggi.txt
    Data from file is :
    ABCDEFGHIJKLMNOPQRSTUVWXYZ

*/