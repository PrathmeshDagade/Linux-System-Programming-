# include <stdio.h>
# include <sys/stat.h>      
# include <fcntl.h>
# include <unistd.h> 
# include <errno.h>
# include <string.h>

int main ()
{

    int fd = 0 ; 

    fd = open ("./Test/  LSPl.txt" , O_RDONLY ) ;   // isssue 

    if ( fd == -1 ) 
    {
        
        perror(" \n ") ;
        return -1 ; 
    }

    printf(" file opened with fd : %d ", fd ) ;

    close(fd) ;
  


    return 0 ; 
}