// output depends on sceduling 

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
    }
    else   // parent 
    {
        printf(" parent process is running \n ") ;
         printf(" pid of child is : %d and parent is : %d \n",getpid(), getppid() ) ;
    }

    
 



    return 0 ; 
}