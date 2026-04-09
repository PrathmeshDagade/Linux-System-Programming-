# include<stdio.h>
# include<unistd.h>
# include<fcntl.h>

int main ()
{
    char Buffer [100] ;

    int fd = 0 ;
    off_t offset = 0 ; 

    fd = open ("./LSP.txt" , O_RDONLY ) ; 

    offset = lseek ( fd ,  10 , SEEK_SET ) ; 
    printf(" current offset is %ld \n ",offset) ;    

    int iRet = read (fd , Buffer , 5 ) ;

    printf("\n" ) ;
    
     write  ( 1 , Buffer , iRet ) ;

    printf("\n") ;

    offset = lseek ( fd ,  0 , SEEK_CUR ) ;     
    printf(" current offset is %ld \n ",offset) ;   
 

    return 0 ; 

}