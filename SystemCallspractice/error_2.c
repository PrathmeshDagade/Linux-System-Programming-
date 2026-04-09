# include <stdio.h>
# include <errno.h>
# include <fcntl.h>

int main ()
{
    int fd = 0 ; 

    fd = open ("marvellous.txt",O_RDONLY) ;

    printf(" value of fd is : %d  \n ",fd) ;

    printf(" vqalue of errno : %d  \n ",errno) ;


    return 0 ; 
}
