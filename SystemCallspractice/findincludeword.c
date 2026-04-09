/*
    Accept  directory file from user 
    count the include word from each file from directory 

*/


# include <stdio.h> 
# include <dirent.h> 
# include <sys/stat.h> 
# include <sys/types.h> 
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

int main ()
{

    char dName [256] ; 
    char word [] = "include" ;
    char Buffer [4096] ;
     memset(Buffer , '\0' , sizeof(Buffer) ) ;

    char * ptr = NULL ; 

    int iRet = 0 , fd = 0 , j = 0 , iCount =  0 ; 

    struct DIR * dir = NULL ;
    struct dirent * entries = NULL ;

    struct stat sobj ;


    printf(" enter the directory name to acess the files \n ") ;
    scanf("%s",dName) ;
  

    dir = opendir(dName) ;

    if ( dir == -1 ) 
    {
        perror(" \n ") ;
        return -1 ;
    }


    while ( (entries = readdir(dir)) != NULL )
    {
        if  (( strcmp(entries -> d_name , ".") == 0 ) ||  ( strcmp(entries -> d_name , "..") == 0 ))
        {
            continue; 
        }

        iRet = lstat( entries->d_name , &sobj ) ;
        
        if( iRet == -1 ) 
        {
           printf( " unable to open lstat \n") ;
           perror(" \n ") ;
           return -1 ; 
        }
        
        if ( S_ISREG(sobj.st_mode))
        {
            if (sobj.st_size == 0 )
            {
                continue; ;
            }

            fd = open (entries -> d_name , O_RDWR) ;

            iRet =  read( fd , Buffer , sobj.st_size ) ;

                ptr = &Buffer ;

            while ( *ptr != '\0' )
            {
                if ( *ptr == 'i' )
                {
                    for (int i = 0 ; i < strlen(word)  -1  ; i++ )
                    {
                        if (*ptr == word[i] )
                        {
                            j++ ; 
                            ptr++ ;
                        }

                    }
                     
                    if (j == 6 )
                    {
                        iCount++ ;
                    }

                }
                else 
                {
                    ptr++ ;
                }
            }    

        }

        close(fd) ;
        memset(Buffer , '\0' , sizeof(Buffer) ) ;

    }

    printf(" the count of include is : %d  \n  ",iCount ) ;

    return 0 ; 
}