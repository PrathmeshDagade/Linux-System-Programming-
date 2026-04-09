# include<stdio.h>
# include<fcntl.h>


int main ( int argc , char * argv [] )
{

    int fd = 0 ; 

    fd = creat(argv[1],0777) ;
    
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