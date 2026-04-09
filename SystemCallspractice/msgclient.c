

# include <stdio.h>
# include <sys/msg.h>
# include <stdlib.h>
# include <sys/ipc.h>
# include <string.h>

# define MAXTEXT     512
struct Marvellousmessage
{

    long int msg_type ;
    char data[MAXTEXT] ;
} ;

int main ()
{
    int iRet = 0 ; 
    int ID = 0 ; 

    key_t key ; 
    key = ftok(".",'a') ;

    ID = msgget ( key , 0666 ) ; 

    if (ID == -1 )
    {
        printf(" unable to allocate msg queue\n") ;
        return -1 ;
    }

    struct Marvellousmessage mobj ; 

    iRet = msgrcv ( ID , (void *) &mobj , MAXTEXT , 0 , IPC_NOWAIT) ;


    if ( iRet > 0 )
    {
        printf(" data recived from message queue : %s \n",mobj.data) ;
    }
    
    

    return 0 ; 
}