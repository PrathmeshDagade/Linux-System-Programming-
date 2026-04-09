# include <stdio.h>
# include <unistd.h>


int main ()
{

    __pid_t pid = 0 ; 

    pid = fork() ;


    if (pid == 0 )
    {
         printf(" CHILD SAYS  : pid of current process is : %d , parent process pid : %d ,  return value : %d \n ",getpid() , getppid() , pid) ;
         execl("./commandexe",NULL) ;         // l :list  exec new text data stack got allocated  
    }
    else 
    {
         printf(" PARENT SAYS : pid of current process is : %d , parent process pid : %d ,  return value : %d \n ",getpid() , getppid() , pid) ;     
    }


   



    return 0 ; 

}