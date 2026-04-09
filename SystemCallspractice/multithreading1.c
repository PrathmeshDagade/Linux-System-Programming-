# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>



void * Demo ( void *p )      // returns void * accepts void * 
{
    int fd = 0 ; 
    int iRet = 0 , iCount = 0 , i = 0 ;  
    char Buffer[1024] ; 

    fd = open ("PPA.txt",O_RDONLY) ;

    while ( (iRet = read(fd , Buffer , sizeof(Buffer)) ) != 0 )
    {
        for ( i = 0 ; i < iRet ; i++ )
        {
            if ((Buffer[i] >= 'A') && (Buffer[i] <= 'Z') )
            {
                iCount++ ;
            }
        }
    }

   printf(" no of capital characters is : %d\n",iCount );

   close (fd) ;

    return NULL ;
}


void * Hello ( void *p )      // returns void * accepts void * 
{

    int fd = 0 ; 
    int iRet = 0 , iCount = 0 , i = 0 ;  
    char Buffer[1024] ; 

    fd = open ("LB.txt",O_RDONLY) ;

    while ( (iRet = read(fd , Buffer , sizeof(Buffer)) ) != 0 )
    {
        for ( i = 0 ; i < iRet ; i++ )
        {
            if ( (Buffer[i] >= 'a') && (Buffer[i] <= 'z' ))
            {
                iCount++ ;
            }
        }
    }

   printf(" no of small characters is : %d\n",iCount );

   close (fd) ;

    return NULL ;
  
}



typedef unsigned long pthread_t ;

int main ()
{


  pthread_t TID1 ; 
   pthread_t TID2 ;

  int iRet = 0 ; 
  int * value = NULL  ; 
  int no = 11 ;
  int Arr [] = {11 , 21 ,51,101} ;

  printf("main thread started\n") ;
  iRet = pthread_create(                                              // thread got created and in run mode 
                           &TID1  ,    // thread id 
                           NULL ,    // thread attributes 
                           Demo ,     // thread call back function 
                           (int * )Arr     // parameters for the call back functions 
    ) ; 

    if ( iRet == 0 )
    {
        printf("thread gets created sucessfully with TID : %ld \n",TID1) ;
    }



    iRet = pthread_create(                                              // thread got created and in run mode 
                           &TID2  ,    // thread id 
                           NULL ,    // thread attributes 
                           Hello ,     // thread call back function 
                           (int * )Arr     // parameters for the call back functions 
    ) ; 

    if ( iRet == 0 )
    {
        printf("thread gets created sucessfully with TID : %ld \n",TID2) ;
    }


    // main thread should wait       
   
    pthread_join(TID1 ,NULL) ;
    pthread_join(TID2 ,NULL ) ;

    printf(" end of main thread\n") ;

    return 0 ; 
}