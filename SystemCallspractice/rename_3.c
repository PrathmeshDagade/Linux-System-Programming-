# include <stdio.h>
# include <string.h>
# include <errno.h>

int main ()
{
    int iRet = 0 ; 

    iRet = rename("./december.txt","./Test/Hello.txt") ;

    if (iRet == 0 )
    {
        printf(" rename is sucessful \n ") ;
    }
    else 
    {
        printf(" the fault is : %s  \n ",strerror(errno)) ;
        return -1 ; 
    }


    return 0 ; 
}