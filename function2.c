#include<stdio.h>

// Function Defination
int Addition(int Value1, int Value2)
{
    int Result = 0;                 // Local Variables

    Result = Value1 + Value2; 

    return Result;
}

int main()                              // Entry point function  
{                                       
    int No1 = 0, No2 = 0, Ans = 0;      // Local Variables 

    printf("Enter first Number : \n");
    scanf("%d",&No1);

    printf("Enter Second Number : \n");
    scanf("%d",&No2);

    Ans = Addition(No1, No2);               // Function Call

    printf("Addition is : %d\n",Ans);

    return 0;
}