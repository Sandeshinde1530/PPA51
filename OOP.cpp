#include<iostream>

using namespace std;

class Arithematic
{
    public :
        int No1;
        int No2;

    Arithematic(int A,int B)
    {
        No1 = A;
        No2 = B;
    }

    int Add()
    {
        int Ans = 0;

        Ans = No1 + No2 ;

        return Ans;
    }

    int Substract()
    {
        int Ans = 0;

        Ans = No1 - No2 ;

        return Ans;
    }

};

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    cout<<" Enter two numbers"<<"\n";
    cin>>iValue1>>iValue2;

    Arithematic aobj(iValue1,iValue2);

    iRet = aobj.Add();
    cout<<"Addition is "<<iRet<<"\n";

    iRet = aobj.Substract();
    cout<<"Substraction is "<<iRet<<"\n";

    return 0;
}