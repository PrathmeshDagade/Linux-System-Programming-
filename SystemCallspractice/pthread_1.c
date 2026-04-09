# include <stdio.h>

void Demo ( int  *  p)
{
    * p = 11 ; 
}

int main ( )
{
    int no = 0 ; 

    Demo (&no) ;

    printf("%d",no) ;


    return 0 ; 
}