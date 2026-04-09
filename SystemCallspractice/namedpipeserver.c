
// NAMED PIPE SERVER  


# include<stdio.h>
# include<stdlib.h>
# include<sys/stat.h>
# include<sys/types.h>
# include <fcntl.h>
# include <unistd.h>


int main ()
{
    int fd = 0 , iRet = 0   ; 

    iRet  = mkfifo("/tmp/marvellous",0666) ;


    if ( iRet == 0 )
    {
        printf(" named file gets created sucessfully \n ") ;
    }

    


    return 0 ; 
}