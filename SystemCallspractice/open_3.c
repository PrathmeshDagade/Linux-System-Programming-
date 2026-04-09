# include <stdio.h>
# include <fcntl.h>      // file control header 

int main ()
{
    int fd = 0 ; 

    fd = open ("Second.c", O_CREAT , 0777) ;

    if (fd == -1 )
    {
        perror("") ;
        printf(" unable to creat file \n ") ;
    }
    else 
    {
        printf("file gets sucessfully created with fd : %d\n ",fd) ;
    }


    return 0 ; 
}