# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>



void * Demo ( void *p )      // returns void * accepts void * 
{
    int iSum = 0 ; 

    int * ptr = NULL ;

    ptr = ( int * ) malloc (sizeof(int )) ;

    printf(" inside demo thread\n") ;  
   
    iSum =  *((int *)p+0) + *((int *)p+1) + *((int *)p+2) +*((int *)p+3)  ;


    * ptr = iSum ;

    pthread_exit(ptr) ;
}


void * Hello ( void *p )      // returns void * accepts void * 
{
    int iSum = 0 ; 

    int * ptr = NULL ;

    ptr = ( int * ) malloc (sizeof(int )) ;

    printf(" inside  hello thread\n") ;  
   
    iSum =  *((int *)p+0) + *((int *)p+1) + *((int *)p+2) +*((int *)p+3)  ;


    * ptr = iSum ;

    pthread_exit(ptr) ;
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
   
    pthread_join(TID1 ,&value) ;
    pthread_join(TID2 ,&value) ;

    printf(" the value returend by thread is :%d" ,*value) ;

    printf(" end of main thread\n") ;

    return 0 ; 
}