// NAMED PIPE SERVER  


# include<stdio.h>
# include<stdlib.h>
# include<sys/stat.h>
# include<sys/types.h>
# include <fcntl.h>
# include <unistd.h>


int main ()
{
    int fd = 0 , iRet = 0   ; 

    iRet  = mkfifo("/tmp/marvellous",0666) ;


    if ( iRet == -1 )
    {
        printf(" unable to create \n  ") ;
        perror(" \n ") ;
        return -1 ;
    }


    fd = open("/tmp/marvellous",O_WRONLY) ;

    if( fd == -1  )
    {
        printf(" unable to open named pipe \n ") ;
        return -1 ;
    }

    write( fd , "Jay Ganesh", 10) ;

    
    printf(" data written sucessfuly into pipe by server   \n ") ;

    close (fd) ;

    unlink("/tmp/marvellous") ;

    return 0 ; 
}