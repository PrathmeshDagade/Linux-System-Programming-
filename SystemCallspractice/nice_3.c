# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>



int main ()
{
    int ret = 0 ; 

    ret = nice(0) ;

    printf(" current nice value : %d \n ",ret ) ;

    ret = nice (-5)  ;  // increase priority 
    
    printf(" current nice value : %d \n ",ret ) ;

    if ( ret == -1 )
    {
        perror(" \n" );
    }
    
    return 0 ; 
}