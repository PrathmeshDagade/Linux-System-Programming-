# include<unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include<string.h>

int main ()
{   
    int fd = 0 ; 
    char Buffer[] = "indiaismycountry" ;
    int iRet = 0 ;  

    fd = open ("demo.txt",  O_CREAT | O_WRONLY | O_APPEND , 0777 ) ;           // imp 

    if (fd < 0 )
    {
        perror("") ;
        return -1 ;
    }
    else 
    {

        printf("file sucessfully opened \n ") ;

        iRet = write( fd , Buffer ,16 ) ;     // overwrite issue 

        printf ("%d bytes sucessfully gets written \n ",iRet) ; 

    }

    fsync(fd) ;      // process is in waiting state 

    close (fd) ;
 

    


    return 0 ; 
}