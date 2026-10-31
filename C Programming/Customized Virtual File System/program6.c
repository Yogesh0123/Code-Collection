#include<stdio.h>
#include<fcntl.h>//file control .h
#include<unistd.h>//Only linux based OS

int main()
{
    int fd=0; //file discripter
    int iRet=0;

    fd = open("Marvellous.txt",O_RDWR);//Read & Write

    if (fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf( "File gets succesfully opened with fd: %d\n",fd);

        iRet=write(fd,"Jay Ganesh...",13);

        printf("%d bytes gets successfully written\n",iRet);

        close(fd);
    }
    return 0;
}