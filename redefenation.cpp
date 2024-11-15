#include<iostream>
using namespace std;

class Base
{
    public:
        void Fun()          // defination
        {
            cout<<"Inside base fun\n";
        }
};

class Derived : public Base 
{
    public:
        void fun()          // redefination
        {
            cout<<"inside derived fun\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";       // 1byte
    Base bobj;
    bobj.Fun();


    Derived dobj;
    dobj.fun();

    return 0;
}