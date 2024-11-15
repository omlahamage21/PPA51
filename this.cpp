#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1, No2;

        Demo(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        // void display(Demo *this, int X)
        void Display(int x)
        {
            cout<<"Value of No1 : "<<No1<<"\n";
            cout<<"Value of No1 : "<<No2<<"\n";
            cout<<"Value of X : "<<x<<"\n";

        }

};

int main()
{
    Demo obj(11,21);
    obj.Display(51);    //display(&obj,51);     display(100,51);

    return 0;
}