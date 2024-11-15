#include<iostream>

using namespace std;

class Addition
{
    public:
        int No1 ;
        int No2 ;

    Addition(int a, int b )
    {
        No1 = a;
        No2 = b;
    }

    int add()
    {
        int Ans ;
        Ans = No1 + No2 ;
        
        return Ans;
    }

    ~Addition()
    {
        
    }

};

int main()
{
    int Value1 = 0 , Value2 = 0 , iRet = 0;

    cout<<"Enter two numbers\n";
    cin>>Value1>>Value2;

    Addition aobj(Value1,Value2);

    iRet = aobj.add();
    cout<<"Addition is "<<iRet<<"\n";

    return 0;
}