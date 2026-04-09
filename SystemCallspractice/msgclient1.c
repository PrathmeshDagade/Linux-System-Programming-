# include <stdio.h>
# include <sys/msg.h>
# include <stdlib.h>
# include <sys/ipc.h>

int main ()
{

    int ID = 0 ; 

    key_t key ; 
    key = ftok(".",'a') ;

    ID = msgget ( key , 0666 ) ; 

    if (ID == -1 )
    {
        printf(" unable to allocate msg queue\n") ;
        return -1 ;
    }


    return 0 ; 
}