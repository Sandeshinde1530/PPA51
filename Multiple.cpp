#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;
        Base1()
        {
            cout<<"INside Base1 Constructor\n";
        }
        ~Base1()
        {
            cout<<"INside Base1 Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun of Base1\n";
        }

};

class Base2
{
    public:
        int i,j;
        Base2()
        {
            cout<<"INside Base2 Constructor\n";
        }
        ~Base2()
        {
            cout<<"INside Base2 Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Fun of Base2\n";
        }

};
class Derived : public Base2,public Base1
{
    public:
    int a,b;
    Derived()
    {
        cout<<"inside derived constructor\n";
    }
    ~Derived()
    {
        cout<<"Inside Derived Destrucotr\n";
    }
    void Sun()
    {
        cout<<"Inside Derived SUn";
    }
};

int main()
{
    Derived dobj;

    cout<<sizeof(Base1)<<"\n";//8
    cout<<sizeof(Base2)<<"\n";//8
    cout<<sizeof(Derived)<<"\n";//24

    return 0;
}