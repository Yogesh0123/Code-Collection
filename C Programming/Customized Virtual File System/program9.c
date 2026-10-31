#include<stdio.h>
#include<fcntl.h>//file control .h
#include<unistd.h>//Only linux based OS
#include<string.h>

int main()
{
    int fd=0; //file discripter
    int iRet=0;
    char Data[]=" Marvellous Infosystems";//create a string

    fd = open("Marvellous.txt",O_RDWR|O_APPEND);//Read & Write//O_Append

    if (fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf( "File gets succesfully opened with fd: %d\n",fd);

        iRet=write(fd,Data,strlen(Data));

        printf("%d bytes gets successfully written\n",iRet);

        close(fd);
    }
    return 0;
}