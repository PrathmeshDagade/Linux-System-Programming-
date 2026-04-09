# include<stdio.h>
# include<unistd.h>
# include<fcntl.h>

int main ()
{
    char Buffer [100]  = "Pune" ;

    int fd = 0 , iRet = 0 ;
    off_t offset = 0 ; 

    fd = open ("./lspx.txt" , O_WRONLY ) ; 

   
    iRet = pwrite (fd , Buffer , 4 , 10 ) ;  

 
    offset = lseek ( fd ,  0 , SEEK_CUR ) ;     
    printf(" current offset is %ld \n ",offset) ;   
 

    return 0 ; 

}