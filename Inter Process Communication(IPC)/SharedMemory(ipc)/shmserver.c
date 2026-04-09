# include <stdio.h>
# include <stdlib.h>
# include <sys/shm.h>

int main ()
{
    int ID = 0 ; 
    char * ptr = NULL ;

    ID = shmget ( 11, 1024 , 0666 | IPC_CREAT) ;

    if (    ID == -1 )
    {
        printf("failed to allocate shared memory by server\n") ;
    }

    ptr = shmat (ID , NULL , 0) ;   // process gets attached refrence count by 1 ; 

    if ( ptr == (char *) -1 )
    {
        printf(" unable to attach memory \n") ;
    }


    *ptr = 'L' ;
    ptr++ ;

    *ptr = 'S' ;
    ptr++ ;

    *ptr = 'P' ;
    ptr++ ;

    *ptr = '\0' ;
    
    shmdt(ptr) ;

    return 0 ; 
    
}