# include <stdio.h>


int main ( int argc , char * argv [] )
{

    int i = 0 ; 

    printf(" command line argv are ; \n ") ;

    for (i = 0 ; i < argc ; i++ )
    {
        printf("  %d ) %s \n ",i,argv[i])  ;    
    }

    
    return 0 ; 
}