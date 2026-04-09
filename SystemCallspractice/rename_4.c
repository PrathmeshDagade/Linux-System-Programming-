// open file discriptor for old path gets unfacted 


# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>
# include <unistd.h> 

int main ()
{
    int iRet = 0 ;
    int fd = 0 ; 
    char Arr[100] ;

    memset(Arr , '\0' , 100 ) ;

    fd = open ("./process.txt", O_RDONLY  ) ;


    if (fd == -1 )
    {
        perror(" \n ") ; 
        return -1 ; 
    }

    iRet = rename("./process.txt","./Test/Hello.txt") ;

    if (iRet == 0 )
    {
        printf(" rename is sucessful \n ") ;
    }
    else 
    {
        printf(" the fault is : %s  \n ",strerror(errno)) ;
        return -1 ; 
    }


    iRet = fd = read (fd , Arr , 50 ) ;

    if (iRet != 0 )
    {
        printf(" data from file is : %s ", Arr) ;
    }

    close (fd) ;

    return 0 ; 
}