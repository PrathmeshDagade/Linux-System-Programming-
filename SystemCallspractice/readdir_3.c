# include<unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include<string.h>
# include <sys/stat.h>
# include <dirent.h>


int main ()
{
    DIR *dp = NULL ;
    

    struct dirent * ptr  = NULL ; 
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

  

    while ( (ptr = readdir(dp)) != NULL  )
    {
        printf(" the fname is : %s \n ",ptr->d_name) ;
        printf(" the inode no is : %d \n ",ptr->d_ino) ;
    }

   
    closedir(dp) ;


    return 0 ; 
}