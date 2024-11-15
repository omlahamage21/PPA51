#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()          // defination
        {    cout<<"Inside base fun\n"; }
        void Gun()
        {   cout<<"inside base Gun\n";  }
        void Sun()
        {   cout<<"inside base sun\n";  }
        void Run()
        {   cout<<"inside base run\n";  }
};

class Derived : public Base 
{
    public:
        int x,y;
        void fun()          // redefination
        {   cout<<"inside derived fun\n";}
        void Gun()
        {   cout<<"inside derived Gun\n";  }
        void Sun()
        {   cout<<"inside derived Sun\n";  }
        void Mun()
        {   cout<<"inside derived mun\n";  }
};

int main()
{
    Derived dobj;
    Base *bptr = NULL;

    bptr = &dobj;       // Upcasting

    bptr->Fun();        // base fun
    bptr->Gun();        // base gun
    bptr->Sun();        // base sun
    bptr->Run();        // base run
   // bptr->Mun();        // ERROR

    return 0;
}