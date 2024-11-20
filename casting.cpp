#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()
        {
            cout<<"INside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()
        {
            cout<<"Inside Derived FUn\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;//NOcasting
    dptr = &dobj;//Nocasting

    bptr = &dobj;//upcasting

    dptr = &bobj;//downcasting      NOT ALLOWED

    return 0;
}
