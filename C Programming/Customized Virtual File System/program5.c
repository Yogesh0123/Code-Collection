#include<stdio.h>
#include<fcntl.h>//file control .h
#include<unistd.h>//Only linux based OS

int main()
{
    int fd=0; //file discripter

    fd = open("Marvellous.txt",O_RDWR);//Read & Write

    if (fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf( "File gets succesfully opened with fd: %d\n",fd);

        write(fd,"Jay Ganesh...",13);

        close(fd);
    }
    return 0;
}