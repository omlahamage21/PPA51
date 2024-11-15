#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        virtual void Fun()          // defination
        {    cout<<"Inside base fun\n"; }
        void Gun()
        {   cout<<"inside base Gun\n";  }
        virtual void Sun()
        {   cout<<"inside base sun\n";  }
        virtual void Run()
        {   cout<<"inside base run\n";  }
};

class Derived : public Base 
{
    public:
        int x,y;
        virtual void fun()          // redefination
        {   cout<<"inside derived fun\n";    }
        void Gun()
        {   cout<<"inside derived Gun\n";    }
        virtual void Mun()
        {   cout<<"inside derived mun\n";    }
        void Run()
        {   cout<<"inside derived run\n";    }
};

int main()
{
    cout<<"size of base class :"<<sizeof(Base)<<"\n";
    cout<<"size of derived class :"<<sizeof(Derived)<<"\n";
    
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