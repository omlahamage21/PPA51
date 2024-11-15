#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()          // defination
        {
            cout<<"Inside base fun\n";
        }
};

class Derived : public Base 
{
    public:
        int x,y;
        void fun()          // redefination
        {
            cout<<"inside derived fun\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;       // Nocasting
    dptr = &dobj;       // Nocasting

    bptr = &dobj;       // Upcasting

    dptr = &bobj;       // Downcasting

    return 0;
}