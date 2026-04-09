# include <stdio.h>
# include <unistd.h>
# include <signal.h>

int main ()
{
    
    int pid = 0 ; 

    printf(" enter the pis of process : %d ",pid )  ;

    scanf("%d",&pid) ;

    kill(pid , SIGUSR1) ;


    return 0 ; 
}