# include <stdio.h>
# include <dlfcn.h>
# include<stdlib.h>


int main() 
{
    int iRet =  0 ; 
    void * handle = NULL ;
    
    int (*fp ) (int , int ) ;   // function pointer 

    handle = dlopen("./libclient1.so" , RTLD_LAZY)  ;

    if ( handle == NULL )
    {
        printf("unable to load the library\n") ;
        return -1 ;
    }
 


    printf("library gets loaded sucessfuly \n") ;

   


    fp = ( int (*)(int , int )) dlsym(handle , "Addition") ;
    if ( fp == NULL )
    {
        printf(" unable to get adresss of a function \n") ;
        dlclose(handle) ;        
    }       
    iRet = fp(11 , 10 ) ; 
    printf(" Addition is: %d\n",iRet) ;



   
    fp = ( int (*)(int , int )) dlsym(handle , "Substraction") ;
    if ( fp == NULL )
    {
        printf(" unable to get adresss of a function \n") ;
        dlclose(handle) ;
        
    }
    iRet = fp(11 , 10) ;
     
    printf(" Substraction is: %d\n",iRet) ;


 
    
    return 0 ; 

}