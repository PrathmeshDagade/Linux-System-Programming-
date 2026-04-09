# include <stdio.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>

int main ()
{
    int fd = 0 ; 
    

    fd = open ("demo.txt",O_RDONLY) ;

    if (errno != 0 )
    {
        printf(" vqalue of errno : %d  \n ",errno) ;
        printf(" error statment : %s \n ",strerror(errno)) ;
    }
    printf(" value of fd is : %d  \n ",fd) ;
 

    return 0 ; 
}