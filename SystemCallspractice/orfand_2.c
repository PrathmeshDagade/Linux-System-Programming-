// output depends on sceduling 


// parent process marli geli ani child la thambavla 20 sec sathi then parent process return 0 keli sucesssfuly 

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int main ()
{

    __pid_t pid = 0 ; 

    pid = fork() ;

    if ( pid == 0  )  // child 
    {
        printf(" child process is running \n ") ;

        printf(" pid of child is : %d and parent is : %d \n ",getpid(), getppid() ) ;

        sleep(20) ;    // child state in sleep

        printf(" pid of child after sleep is : %d and parent after sleep is : %d \n ",getpid(), getppid() ) ;

        exit (0) ;
    }
    else   // parent 
    {

        printf(" parent process is running \n ") ;
        printf(" pid of child is : %d and parent is : %d \n",getpid(), getppid() ) ;
        exit(1) ;

    }

    
 



    return 0 ; 
}