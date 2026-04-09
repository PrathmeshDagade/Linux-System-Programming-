# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <unistd.h>

int main ()
{
    

    char Buffer [50] ;

    memset(Buffer , '\0' , sizeof(Buffer) ) ;

    
    getcwd (Buffer , sizeof(Buffer))  ;
    
    printf(" current working directory name : %s \n ",Buffer) ;      // Buffer contain abasolute path  where the current working directory name is mentrioned in    UAREA  


    return 0 ; 
}