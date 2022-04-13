// C++ Program to Swap Two Numbers without using third variable

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter the First Number ::" << endl;
    cin >> a;

    cout << "Enter the Second Number ::" << endl;
    cin >> b;

    cout << "The actual Value is ::" << endl;
    cout << "a :-" << a << endl;
    cout << "b :-" << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << endl;
    cout << "After exchange the value is ::" << endl;
    cout << "a :-" << a << endl;
    cout << "b :-" << b << endl;
    return 0;
}
