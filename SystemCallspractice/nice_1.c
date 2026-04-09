# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>


int main ()
{
    int ret = 0 ; 

    ret = nice(0) ;

    printf(" current nice value : %d \n ",ret ) ;

    
    return 0 ; 
}