# include <stdio.h>
# include <unistd.h>
# include <signal.h>


void MarvellousHandler (int no )
{
    printf(" signal arrived %d\n",no) ;
}


int main ()
{
    printf(" the process id sis : %d\n",getpid()) ;

    signal ( SIGUSR1 , MarvellousHandler) ;
    while (1)
    {
        sleep(1) ;
    }

    return 0 ; 
}