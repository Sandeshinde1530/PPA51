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

class DerivedX : public Derived
{
    public:
    int a,b;
    DerivedX()
    {
        cout<<"INside DerivedX COnstructor\n";
        a = 50;
        b = 60;
    }
    ~DerivedX()
    {
        cout<<"Inside DerivedX Desrtuctor\n";
    }
    void Sun()
    {
        cout<<"inside Derived Sun\n";
    }
};

int main()
{
    
    DerivedX dobj;
    //Constructors : Base -> Derived -> DerivedX

    cout<<"inside Main function\n";

    cout<<"Size of basse class "<<sizeof(Base)<<"\n";//8
    cout<<"Size of basse class "<<sizeof(Derived)<<"\n";//16
    cout<<"Size of basse class "<<sizeof(DerivedX)<<"\n";//24

    cout<<dobj.i<<"\n";//10
    cout<<dobj.j<<"\n";//20
    cout<<dobj.x<<"\n";//30
    cout<<dobj.y<<"\n";//40
    cout<<dobj.a<<"\n";//50
    cout<<dobj.b<<"\n";//60

    dobj.Fun();//Inside fun of Base
    dobj.Gun();//Inside GUn of Derived
    dobj.Sun();//Inside sun of DerivedX

    //Destructors  : Derived -> Derived -> Base
    return 0;
}