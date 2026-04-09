# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main ()
{

    void * ptr = NULL ;
    int iRet = 0 ; 

    ptr = sbrk(0) ;

    printf(" current break value : %p \n ",ptr) ;

  


    return  0 ; 
}