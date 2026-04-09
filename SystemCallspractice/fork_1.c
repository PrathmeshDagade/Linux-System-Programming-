# include <stdio.h>
# include <unistd.h>


int main ()
{

    __pid_t pid = 0 ; 

    pid = fork() ;


    printf("pid of current process is : %d , parent process pid : %d ,  return value : %d \n ",getpid() , getppid() , pid) ;



    return 0 ; 

}