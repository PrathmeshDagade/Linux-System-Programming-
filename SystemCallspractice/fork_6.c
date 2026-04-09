# include <stdio.h>
# include <unistd.h>


int main ()
{

     

    if (fork() == 0 )
    {
         printf(" child call jay ganesh \n ") ;
    }
    else 
    {
         printf(" parent call jay ganesh \n ") ;
    }


    

    return 0 ; 

    
}