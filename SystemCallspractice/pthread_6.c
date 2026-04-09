# include <stdio.h>
# include <pthread.h>


void * Demo ( void *p )      // returns void * accepts void * 
{
    printf(" inside thread  with value %d \n", (int * ) p) ;      

   
    return NULL ;
}

typedef unsigned long pthread_t ;

int main ()
{


  pthread_t TID ;
  int iRet = 0 ; 
  int value = 0 ; 
  int no = 11 ;

  printf("main thread started\n") ;
  iRet = pthread_create(                                              // thread got created and in run mode 
                           &TID  ,    // thread id 
                           NULL ,    // thread attributes 
                           Demo ,     // thread call back function 
                           (int * )no      // parameters for the call back functions 
    ) ; 

    if ( iRet == 0 )
    {
        printf("thread gets created sucessfully with TID : %ld \n",TID) ;
    }

    // main thread should wait       
    pthread_join(TID ,NULL) ;

    

    printf(" end of main thread\n") ;

    return 0 ; 
}