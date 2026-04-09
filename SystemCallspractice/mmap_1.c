# include <stdio.h>
# include <sys/mman.h>
# include <string.h>
# include <unistd.h>


int main ()
{
    char * ptr = NULL ;


    ptr = mmap (NULL , 4049 ,  PROT_READ | PROT_WRITE , MAP_PRIVATE  | MAP_ANONYMOUS , -1 , 0  ) ;

    strcpy( ptr , " jay ganesh .. ") ;

    printf(" data mapped memory is : %s \n ",ptr) ;
 

    return 0 ; 
    


}
