#include<stdio.h>
#include<fcntl.h>//file control .h
#include<unistd.h>//Only linux based OS
#include<string.h>

int main()
{
    int fd=0; //file discripter
    int iRet=0;
    char Data[100]={'\0'};//char Array create

    fd = open("Marvellous.txt",O_RDONLY);//Read 

    if (fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf( "File gets succesfully opened with fd: %d\n",fd);

        iRet=read(fd,Data,13);

        printf("%d bytes gets successfully written\n",iRet);

        printf("Data from file is : %s\n",Data);

        close(fd);
    }
    return 0;
}