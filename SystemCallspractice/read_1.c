# include<unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include<string.h>

int main ()
{   
    int fd = 0 ; 
    char Buffer[100] = {'\0'} ;
    int iRet = 0 ;  

    fd = open ("demo.txt",O_RDONLY) ;

    if (fd < 0 )
    {
        perror("") ;
        return -1 ;
    }
    else 
    {

        printf("file sucessfully opened \n ") ;

        iRet = read( fd , Buffer ,10 ) ;     // overwrite issue 

        printf ("%d bytes sucessfully read \n ",iRet) ; 

        printf(" data from file %s : ",Buffer) ;
    }


    close (fd) ;
 
    return 0 ; 
}