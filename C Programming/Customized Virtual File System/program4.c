#include<stdio.h>
#include<fcntl.h>//file control .h
#include<unistd.h>//Only linux based OS

int main()
{
    int fd=0; //file discripter

    fd = open("Marvellous.txt",O_RDONLY);

    if (fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf( "File gets succesfully opened with fd: %d\n",fd);
        close(fd);
    }
    return 0;
}