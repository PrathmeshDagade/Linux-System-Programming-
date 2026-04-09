# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int main ()
{

    void * Current_break  = NULL ;
 
    int iRet = 0 ; 
    
    Current_break = sbrk(0) ;

    printf("  current process break %p \n ",Current_break ) ;

    brk( (char *)Current_break + 100 ) ;

    strcpy((char *) Current_break , " jay ganesh..." ) ;

    printf(" data from newmemory %s \n ",( char * )Current_break) ;
    
    
    brk( Current_break ) ;

    return  0 ; 
}