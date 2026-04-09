# include <stdio.h>
# include <sys/stat.h>      
# include <fcntl.h>
# include <unistd.h> 
# include <errno.h>
# include <string.h>

int main ()
{
    char Path [100] ; 
    int iRet = 0 ;
    int fd = 0 ; 
    char Arr [20] ;

    memset(Path , '\0' , sizeof(Path)) ;

    iRet = readlink("./Test/LSPl.txt" , Path , sizeof(Path)) ;

    if ( iRet == -1 )
    {
        perror(" \n ") ;
        return -1 ;
    }


    printf(" data from radlink is : %s \n ",Path ) ;
   
    Path[iRet] = '\0' ;


    fd = open( Path  , O_RDONLY ) ; 

    if (fd == -1 )
    {
        perror(" \n" ) ;
        return -1 ;
    }

    iRet = read (fd , Arr , sizeof(Arr)) ;
    
    if (iRet == -1 )
    {
        perror( " \n " ) ;
    }
    printf(" the data from file is : %s ",Arr ) ;


    close (fd);

    
    return 0 ; 
}