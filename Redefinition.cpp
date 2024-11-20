#include<iostream>
using namespace std;

class Base
{
    public:
        void Fun()
        {
            cout<<"INside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        void Fun()
        {
            cout<<"Inside Derived FUn\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";       //1byte
    Base bobj;
    bobj.Fun();

    Derived dobj;
    dobj.Fun();

    return 0;
}
