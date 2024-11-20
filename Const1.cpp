#include<iostream>
using namespace std;

int main()
{
    int No1 = 10;

    const int No2 = 0;

    No1++; //Allowed
    No2++;  //NOt ALlowed

    No1 = 21;//Allowed
    No2 = 21;//NOt Allowed

    return 0;
}
