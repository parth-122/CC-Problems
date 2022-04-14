// Write a c++ program to reverse the number

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, i, x, sum = 0, mul = 1000;
    cout << "Enter Four Digits Number::" << endl;
    cin >> a;

    for (i = 0; i < 4; i++)
    {
        while (a != 0)
        {
            x = a % 10;
            sum = sum + (x * mul);
            mul = mul / 10;
            a /= 10;
        }
    }
    cout << "The Reverse Number is ::" << sum << endl;
    return 0;
}
