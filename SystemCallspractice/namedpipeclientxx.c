// NAMED PIPE CLIENT  


# include<stdio.h>
# include<stdlib.h>
# include<sys/stat.h>
# include<sys/types.h>
# include <fcntl.h>
# include <unistd.h>


int main ()
{
    int fd = 0 , iRet = 0   ; 
    char Arr[100] ;
   
    fd = open( "/tmp/marvellous",O_RDONLY ) ;

    if( fd == -1  )
    {
        printf(" unable to open named pipe \n ") ;
        return -1 ;
    }

    read( fd , Arr , 3 ) ;
    printf(" data sucessfuly read from the pipe by the client \n ") ;
    printf(" data is : %s ",Arr) ;



    read( fd , Arr , 7 ) ;
    printf(" data sucessfuly read from the pipe by the client \n ") ;
    printf(" data is : %s ",Arr) ;

    close (fd) ;


    return 0 ; 
}