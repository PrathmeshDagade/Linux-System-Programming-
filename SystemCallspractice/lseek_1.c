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


    memset(Buffer ,'\0', SIZE_BUFFER) ;     
    fd = open ("demo.txt",O_RDONLY) ;

    if (fd < 0 )
    {
        perror("") ;
        return -1 ;
    }
    else 
    {
        printf("file sucessfully opened \n ") ;

        iRet = lseek( fd ,-10 , SEEK_END ) ;

        printf(" updated fileoffset is %d \n ",iRet ); 

        close (fd) ;
      
    }

    

   
 
    return 0 ; 
}