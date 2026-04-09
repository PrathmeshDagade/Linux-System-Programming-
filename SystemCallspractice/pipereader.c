# include <stdio.h>

int main ()
{
    char Arr [100] = {'\0'};

    fgets(Arr , sizeof(Arr) , stdin) ;

    printf(" data recived : %s",Arr) ;



    return 0 ; 
}