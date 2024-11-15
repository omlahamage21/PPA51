#include<stdio.h>

int main()
{
    char c = 'O';
    int i = 11;
    float f = 85.56;
    double d = 56.5454485;

    printf("%d\n",sizeof(c));    //1 
    printf("%d\n",sizeof(i));    //4
    printf("%d\n",sizeof(f));    //4
    printf("%d\n",sizeof(d));    //8

    return 0;
}