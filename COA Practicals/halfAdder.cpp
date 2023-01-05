#include<iostream>
using namespace std;
void Half_Adder(int A,int B)
{
    int sum, carry;
    sum = A^B;
    carry = A&B;
    cout<<"sum="<<sum<<endl;
    cout<<"carry="<<carry<<endl;
}
int main()
{
    int a = 10;
    int b = 30;
    Half_Adder(a,b);
    return 0;
}
