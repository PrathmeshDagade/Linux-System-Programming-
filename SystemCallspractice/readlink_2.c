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

    memset(Path , '\0' , sizeof(Path)) ;

    iRet = readlink("./Test/LSPl.txt" , Path , sizeof(Path)) ;

    if ( iRet == -1 )
    {
        perror(" \n ") ;
        return -1 ;
    }


    printf(" data from radlink is : %s \n ",Path ) ;
   

    Path[iRet] = '\0' ;


    return 0 ; 
}