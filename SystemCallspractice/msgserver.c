
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

    ID = msgget ( key , 0666 | IPC_CREAT ) ; 

    if (ID == -1 )
    {
        printf(" unable to allocate msg queue\n") ;
        return -1 ;
    }


    struct  Marvellousmessage mobj ; 

    mobj.msg_type = 11 ;
    strcpy(mobj.data , "Jay Ganesh...") ;


    iRet = msgsnd( ID,(void *) &mobj , MAXTEXT, 0 ) ;

    if ( iRet == 0 )
    {
        printf(" message sent sucessfully\n") ;
    }
    return 0 ; 
}