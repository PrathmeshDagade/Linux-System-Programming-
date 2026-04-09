# include <stdio.h>
# include <sys/stat.h>      
# include <fcntl.h>

int main ()
{
    int iRet = 0 ;
   struct stat sobj ; 

   iRet = stat("demo.txt" , &sobj ) ;

   if(iRet == 0 )
   {
     printf("stat works sucessfuly \n ") ;
   } 
   else 
   {
     printf(" there is issue in stat \n ") ;
     return -1 ;
   }




    return 0 ; 
}