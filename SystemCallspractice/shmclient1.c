# include <stdio.h>
# include <stdlib.h>
# include <sys/shm.h>

int main ()
{
    int ID = 0 ; 

    ID = shmget ( 11, 1024 , 0666 ) ;

    if (    ID != -1 )
    {
        printf("shared memory gets allocated by client\n") ;
    }




    return 0 ;     
}