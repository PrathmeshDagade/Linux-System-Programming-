# include <stdio.h>
# include <unistd.h>

int main ()
{
    printf(" the process id sis : %d\n",getpid()) ;

    while (1)
    {
        sleep(1) ;
    }

    return 0 ; 
}