// Check Number is Armstrong or not

// Armstrong means the cube of that number and it's sum are same

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, x, sum = 0;
    cout << "Enter a Number ::" << endl;
    cin >> n;
    int l = n;

    while (n > 0)
    {
        x = n % 10;
        sum = sum + (x * x * x);
        n /= 10;
    }
    if (sum == l)
    {
        cout << "This Number is Armstrong Number ::" << endl;
    }
    else
    {
        cout << "This Number is Not Armstrong Number ::" << endl;
    }
    return 0;
}
