# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>


void fun ()
{
    printf(" inside fun \n ") ;
    
}

void gun ()
{
    printf(" inside gun \n ") ;
}



int   main ()
{

    printf(" process is created \n " ) ;


    atexit(fun) ;
    atexit(gun) ;


    exit(11)  ;    // immidiate terminates the process  ; 
}