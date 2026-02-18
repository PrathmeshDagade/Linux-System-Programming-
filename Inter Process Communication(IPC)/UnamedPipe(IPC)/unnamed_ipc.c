# include <stdio.h>
# include <stdlib.h> 
# include <unistd.h>

int main ()
{

    int PipeDes[2] = {0,0} ;
    int iRet = 0 ; 
    __pid_t pid = 0 ; 
    char Buffer[1024] = {'\0'} ; 

    iRet = pipe(PipeDes)  ;

    if (iRet == -1 )
    {
        perror("\n") ;
        return -1 ;
    }

    pid = fork () ;

    if ( pid == 0 )   // child process 
    {
        close(PipeDes[0]) ;
        write (PipeDes[1] , "Jay Ganesh..." , 13) ;
        exit(0) ;
        
    }
    else // parent process 
    {

        close(PipeDes[1]) ;
        read(PipeDes[0] , Buffer , sizeof(Buffer)) ;

    }

    
    printf(" the data from child said is : %s",Buffer) ;
 

    return 0 ; 
}