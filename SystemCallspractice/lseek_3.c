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
    fd = open ("Hole.txt",O_WRONLY | O_CREAT , 0777) ;

    if (fd < 0 )
    {
        perror("") ;
        return -1 ;
    }
    else 
    {
        printf("file sucessfully opened \n ") ;

       iRet =  lseek(fd,4100,SEEK_SET) ;

       printf("current offset is : %d ",iRet) ;

       iRet =  write(fd , "END" , 3 ) ;
    
       printf("%d",iRet) ;

        close (fd) ;
      
    }

    

   
 
    return 0 ; 
}