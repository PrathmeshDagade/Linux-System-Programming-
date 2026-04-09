# include<stdio.h>
# include<fcntl.h>


int main ()
{

    int fd = 0 ; 

    fd = creat("LSP.txt",0777) ;
    
    if (fd == -1 )
    {
        printf("unable to creat a file \n ") ;

    }
    else 
    {
        printf(" file get sucessfully created with fd :%d \n ",fd) ;
    }




    return 0 ; 
} 