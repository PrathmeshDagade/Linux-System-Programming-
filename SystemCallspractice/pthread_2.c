# include <stdio.h>

void Demo ( int *p)
{
    * p = 11 ;  
    *( p + 1) = 21 ;

}

int main ( )
{
    int Arr[2]  ; 

    Demo (Arr) ;

    printf("%d %d",Arr[0],Arr[1]) ;


    return 0 ; 
}