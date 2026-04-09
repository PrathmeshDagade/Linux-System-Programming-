# include<stdio.h>

int Addition (int no1 , int no2 )
{
    int Ans = 0 ; 
    Ans = no1 + no2 ; 
    return Ans ;
}

int main ()
{
    int iRet = 0  , a = 0 , b = 0 ;

    printf("enter first number \n") ;
    scanf("%d",&a) ;

    printf("enter second number\n") ;
    scanf("%d",&b) ;

    iRet = Addition(a,b) ;


    printf("the addition is : %d \n",iRet) ;


    return 0 ; 
}

