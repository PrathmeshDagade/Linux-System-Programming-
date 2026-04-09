#include<unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include<string.h>

# define SIZE_BUFFER 100
int main ()
{   
    int fd = 0 ; 
    char Buffer[SIZE_BUFFER]  ;
    int iRet = 0 ;  


    memset(Buffer ,'\0', SIZE_BUFFER) ;      // change 


    fd = open ("demo.txt",O_RDONLY) ;

    if (fd < 0 )
    {
        perror("") ;
        return -1 ;
    }
    else 
    {

        printf("file sucessfully opened \n ") ;

        iRet = read( fd , Buffer ,10 ) ;    
        printf ("%d bytes sucessfully read \n ",iRet) ; 
        printf(" data from file %s \n: ",Buffer) ;

        memset(Buffer ,'\0', SIZE_BUFFER) ;

        iRet = read( fd , Buffer ,10 ) ;     // overwrite issue 
        printf ("%d bytes sucessfully read \n ",iRet) ; 
        printf(" data from file %s \n: ",Buffer) ;
    }


    close (fd) ;
 
    return 0 ; 
}