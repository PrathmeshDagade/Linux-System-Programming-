# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int main ()
{

    void * Current_break  = NULL ;
 
    void * new_break = NULL ; 
    
    
    
    Current_break = sbrk(0) ;
    printf("  current process break %p \n ",Current_break ) ;

    new_break = sbrk(100) ;

    strcpy((char *)new_break , " jay ganesh..." ) ;

    printf(" data from newmemory %s \n ",( char * )new_break) ;
    
    
    sbrk(-100 ) ;
    return  0 ; 
}