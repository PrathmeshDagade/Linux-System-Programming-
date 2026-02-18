# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>


int main ()
{

    char Buffer [1024] = {'\0'} ;
    int fd = 0 ; 

    fd = open("/tmp/ganesh" ,O_RDONLY) ;

    if ( fd == -1 )
    {
        perror("\n" ) ;
        return -1 ;
    }
    
    read (fd ,Buffer,sizeof(Buffer)) ;

   
    close(fd) ;
    
    printf(" data from server side is : %s ",Buffer) ;
    return 0 ; 
}