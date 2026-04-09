# include<unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include<string.h>
# include <sys/stat.h>
# include <dirent.h>
# include <sys/types.h>


int main ()
{
    DIR *dp = NULL ;
    
    dp = opendir("./Data") ;

    if (dp == NULL )
    {
        perror(" \n ") ;
        return -1 ; 
    }
    else 
    {
        printf(" directorie get sucessfuly opened \n ") ;
    }
   


    return 0 ; 
}