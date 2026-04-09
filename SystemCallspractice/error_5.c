# include <stdio.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>

int main ()
{
    int fd = 0 ; 
    

    fd = open ("marvellous.txt",O_RDONLY) ;

    if (errno != 0 )
    {
       switch(errno)
       {
            case ENOENT: 
             printf(" there is no such file . create ther file for open \n ") ;
             break ;

            case EACCES: 
             printf(" unable to acess as there is no permission graunted \n ") ;
             break ;

            default:
             printf(" %s \n ",strerror(errno) ) ;


       }
    }
    printf(" value of fd is : %d  \n ",fd) ;
 

    return 0 ; 
}