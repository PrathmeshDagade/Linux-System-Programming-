# include<unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include<string.h>
# include <sys/stat.h>

int main ()
{   
   int iRet = 0 ; 

   iRet = rmdir("./Data") ;

    if (iRet == 0 )
    {
        printf(" sucess  (deleted )\n ") ;
    }
    else 
    {
        perror(" \n ") ;
    }


    return 0 ; 
}