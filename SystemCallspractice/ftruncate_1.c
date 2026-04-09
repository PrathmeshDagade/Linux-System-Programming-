# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int main ()
{
    int iRet = 0 , fd = 0 ;
    
    fd = open ("demo.txt" , O_RDONLY ) ;


   iRet = ftruncate( fd , 5 ) ; 


   if ( iRet == 0 )
   {
     printf("truncate is sucessful  \n ") ;
   }
   else 
   {
    printf(" isuue in struncate  \n ") ;
   }



  


    return 0 ; 
}
