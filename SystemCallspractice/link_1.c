# include <stdio.h>
# include <sys/stat.h>      
# include <fcntl.h>
# include <unistd.h> 

int main ()
{
    int iRet = 0 ; 

   iRet =  link("demo.txt" , "demoX.txt") ;  

   
    if ( iRet == 0 )
    {
        printf(" file link is  sucessful \n ") ;
    }
    

    return 0 ; 
}