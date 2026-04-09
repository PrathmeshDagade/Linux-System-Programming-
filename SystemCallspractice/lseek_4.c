# include <stdio.h>
# include<fcntl.h>
# include<unistd.h>
# include <string.h>
# include<errno.h>


int  main ()
{
    int fd = 0 , iRet = 0 ; 
    char Buffer[4096] ; 

    memset( Buffer , 'x' , sizeof(Buffer)) ;


    fd = open ("shubh.txt" ,O_CREAT|O_RDWR ,0777) ;

    if (fd == -1 )
    {
        printf("the reason is : %s\n",strerror(errno));
    }
    else
    {
        printf("file opened sucessfully \n ") ;
    }

    read (fd ,Buffer ,17) ;
  
    lseek(fd,4000,SEEK_SET) ;

  iRet =  write(fd,Buffer,17) ;

   lseek(fd,30,SEEK_CUR) ;

    iRet =  write(fd,Buffer,17) ;

  printf("%d : bytes written sucessfuly \n ",iRet) ;

  
    return 0 ; 
}