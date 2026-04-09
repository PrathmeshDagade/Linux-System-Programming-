# include <stdio.h>
# include <sys/mman.h>
# include <string.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>


int main ()
{
    int fd = 0 ; 
    char * ptr = NULL ;

    struct stat st ;
    
    fd = open("pune.txt", O_RDWR | O_CREAT , 0777  ) ;

    fstat(fd , &st) ;

    ftruncate( fd , 4096 ) ;

    ptr = mmap (NULL , st.st_size ,  PROT_READ | PROT_WRITE , MAP_PRIVATE  | MAP_SHARED , fd , 0  ) ;

    strcpy( ptr , " jay ganesh .. ") ;

    printf(" data mapped memory is : %s \n ",ptr) ;
 

    munmap( ptr , st.st_size ) ; 


    return 0 ; 
    


    
}
