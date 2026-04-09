# include<stdio.h>
# include<pthread.h>


static int iCnt = 0 ; 

void * Increament(void * Arg)
{
    // Critical Section start 
    iCnt++ ;
    // Critical Section end 
    printf("%d\n",iCnt) ;
    return NULL ;
}


int main ()
{

    pthread_t t1 ,t2 ; 

    pthread_create(&t1 , NULL , Increament , NULL ) ;
    pthread_create(&t2 , NULL , Increament , NULL ) ;

    pthread_join(t1 , NULL );
    pthread_join(t2 , NULL );




    return 0 ; 
}