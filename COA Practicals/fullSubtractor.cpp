#include<bits/stdc++.h>
using namespace std;
void full_subtractor(int A, int B, int Bin){
    int Difference = (A^B) ^ Bin;
    int A1 = not(A);
    int B_out = A1 & Bin | A1 & B | B & Bin;

    cout<<"Difference="<<Difference<<endl;
    cout<<"B_out="<<B_out<<endl;
}
    int main(){
        int A = 1;
        int B = 0;
        int Bin = 1;
        full_subtractor(A,B,Bin);
        return 0;
    }
