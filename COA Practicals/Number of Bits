// CPP program to find sum of numbers upto n whose 2 bits are set

#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int findSum(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
        if (countSetBits(i) == 20)
            sum += i;
 
    return sum;
}

int main()
{
    int n = 10;
    cout << findSum(n);
    return 0;
}
