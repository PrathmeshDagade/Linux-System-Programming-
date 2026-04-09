# include <stdio.h>
# include <unistd.h>
# include <string.h>


int main ()
{

    int iRet = 0 ; 

    void * Current_Break ;

    void * New_Break ;

   Current_Break = sbrk(0) ;

    iRet = brk((char*) Current_Break + 100 );

    printf(" the current address is now at: %p \n ",Current_Break) ;

    strcpy( Current_Break , " jay ganesh...") ;

    printf("  the data of current break is  : %s \n ", Current_Break ) ;


    sbrk(-100) ;

    New_Break = sbrk(0) ; 

    printf(" new breakpoint point is at : %p ",New_Break) ;

    iRet = brk( (char*)New_Break  + 100 ) ;

    strcpy( New_Break , " shubhada....." ) ;

    printf("  the data of new break is : %s \n ", New_Break ) ;


    sbrk (-100) ;


    return 0 ; 



    
}