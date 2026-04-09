# include <stdio.h>
# include <fcntl.h>      // file control header 
# include <unistd.h>     // universal standard header 

int main ()
{
    int fd = 0 ; 

    fd = open ("Second.c", O_CREAT | O_TRUNC, 0777) ;

    if (fd == -1 )
    {
        perror("") ;
        printf(" unable to creat file \n ") ;
    }
    else 
    {
        printf("file gets sucessfully created with fd : %d\n ",fd) ;
    }


    close(fd) ;

    return 0 ; 
}