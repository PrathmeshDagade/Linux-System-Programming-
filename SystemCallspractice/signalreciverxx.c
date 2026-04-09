# include <stdio.h>
# include <unistd.h>
# include <signal.h>


void MarvellousHandler (int no )
{
    if ( no == SIGINT)
    {
        printf(" signal sigint %d\n",no) ;
    }
    else if ( no == SIGUSR1)
    {
            printf(" signal usr1  %d\n",no) ;
    }
}



int main ()
{
    printf(" the process id sis : %d\n",getpid()) ;

    signal ( SIGUSR1 , MarvellousHandler) ;
    signal ( SIGINT , MarvellousHandler) ;
    while (1)
    {
        sleep(1) ;
    }

    return 0 ; 
}