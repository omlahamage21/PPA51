#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;          // 4
    float f;        // 4
    char ch;        // 1
    double d;       // 8
};                 // summatio : 17

union Hello
{
    int i;      // 4
    float f;    //4
    char ch;    //1
    double d;   //8
};              // largest : 8

int main()
{

    struct Demo obj;
    union Hello hobj;

    printf ("size of structure is : %d\n",sizeof(obj));
    printf ("size of union is : %d\n",sizeof(hobj));

    hobj.i = 97;

    return 0;
}