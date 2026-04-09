# include <stdio.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>

int main ()
{
    int fd = 0 ; 
    

    fd = open ("marvellous.txt",O_RDONLY) ;

    printf(" value of fd is : %d  \n ",fd) ;
    printf(" vqalue of errno : %d  \n ",errno) ;
    printf(" error statment : %s \n ",strerror(errno)) ;

    return 0 ; 
}
