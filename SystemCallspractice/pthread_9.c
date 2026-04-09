# include <stdio.h>
# include <pthread.h>


void * Demo ( void *p )      // returns void * accepts void * 
{
    int iSum = 0 ; 

    printf(" inside thread\n") ;  
   
    iSum =  *((int *)p+0) + *((int *)p+1) + *((int *)p+2) +*((int *)p+3)  ;


    // return iSum ;

    pthread_exit((void * )iSum) ;
}

typedef unsigned long pthread_t ;

int main ()
{


  pthread_t TID ;
  int iRet = 0 ; 
  int value = 0 ; 
  int no = 11 ;
  int Arr [] = {11 , 21 ,51,101} ;

  printf("main thread started\n") ;
  iRet = pthread_create(                                              // thread got created and in run mode 
                           &TID  ,    // thread id 
                           NULL ,    // thread attributes 
                           Demo ,     // thread call back function 
                           (int * )Arr     // parameters for the call back functions 
    ) ; 

    if ( iRet == 0 )
    {
        printf("thread gets created sucessfully with TID : %ld \n",TID) ;
    }

    // main thread should wait       
    pthread_join(TID ,&value) ;

    printf(" the value returend by thread is :%d" ,value ) ;

    printf(" end of main thread\n") ;

    return 0 ; 
}