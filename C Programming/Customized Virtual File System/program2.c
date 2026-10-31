#include<stdio.h>
#include<fcntl.h>//file control .h

int main()
{
    int fd=0; //file discripter

    fd = creat("Marvellous.txt",0777);//0777 is permissons

    if (fd==-1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf( "File gets succesfully created with fd: %d\n",fd);
    }
    return 0;
}