# include <stdio.h>
# include <sys/stat.h>      
# include <fcntl.h>
# include <unistd.h> 
# include <errno.h>
# include <string.h>

int main ()
{
    int iRet = 0 ; 

   iRet =  symlink( "./LSP.txt" , "./Test/LSPl.txt") ;

    if ( iRet == 0 )
    {
        printf("  symlink is  sucessful \n ") ;
    }
    else 
    {
        printf(" fault is %s \n ",strerror(errno)) ;
    }
    

    return 0 ; 
}