# include <stdio.h>
# include <sys/stat.h>      
# include <fcntl.h>

int main (int argc , char * argv [] )
{
    int iRet = 0 ;
   struct stat sobj ; 

   iRet = stat( argv[1] , &sobj ) ;

   if(iRet == 0 )
   {
     printf("stat works sucessfuly \n ") ;
   } 
  

   printf("inode no :  %lu \n ",sobj.st_ino) ;
   printf("the file type and permission is %lu ",sobj.st_mode) ;
   printf(" hardlink count is :  %lu \n ",sobj.st_nlink) ;
   printf(" total size of file  %lu \n ",sobj.st_size) ;
   printf(" block size is : %lu \n ",sobj.st_blksize) ;
   
   
   printf(" file type is :%d  \n ", sobj.st_mode) ;


   if (S_ISREG(sobj.st_mode))
   {
     printf(" regular file : \n ") ;
   }
   else if (S_ISDIR(sobj.st_mode))
   {
     printf(" directory file \n ") ;
   }

    return 0 ; 
}