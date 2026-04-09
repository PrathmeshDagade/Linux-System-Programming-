# include<stdio.h>
# include<fcntl.h>
# include<unistd.h>

int main()
{
    int fd = 0  ;

    fd = open("yello.txt",O_CREAT ,0777 ) ;









    return 0 ; 
}