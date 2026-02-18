# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>


int main ()
{

    int iRet = 0 ; 
    int fd = 0 ; 


    iRet = mkfifo ("/tmp/ganesh",0777) ;

    if ( iRet == -1 )
    {
        perror("\n") ;
        return -1 ;
    }

    fd = open("/tmp/ganesh" ,O_WRONLY) ;

    if ( fd == -1 )
    {
        perror("\n" ) ;
        return -1 ;
    }
    
    write (fd ,"Jay Ganesh...",13) ;
   
    close(fd) ;


    printf(" data written sucessfuly in a fifo file \n") ;
    
    unlink("/tmp/ganesh") ;

    return 0 ; 
}