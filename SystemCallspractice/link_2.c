# include <stdio.h>
# include <sys/stat.h>      
# include <fcntl.h>
# include <unistd.h> 

int main ()
{
    int iRet = 0 ; 

   iRet =  link("./demo.txt" , "./Test/demo.txt") ;      // demo.txt is untouchable  

    if ( iRet == 0 )
    {
        printf(" file link is  sucessful \n ") ;
    }

    

    return 0 ; 
}