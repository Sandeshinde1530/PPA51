#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

    Base()
    {
        cout<<"INside Base constructor\n";
        i = 10;
        j = 20;
    }
    ~Base()
    {
        cout<<"INside Base Destructor\n";
    }
     void Fun()
    {  cout<<"Inside Base Fun\n";}
};

class Derived : public Base
{
    public:
        int x,y;

    Derived()
    {
        cout<<"INside Derived constructor\n";
        x = 30;
        y = 40;
    }
    ~Derived()
    {
        cout<<"INside Derived Destructor\n";
    }
     void Gun()
    {  cout<<"Inside Derived Gun\n";}
   
};

int main()
{
    
    Derived dobj;

    cout<<"inside Main function\n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.Fun();
    dobj.Gun();

    return 0;
}