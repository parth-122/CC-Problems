// Write C++ program to check even or odd using functions

#include <bits/stdc++.h>
using namespace std;
void check(int n)
{
    if (n % 2 == 0)
    {
        cout << "This is Even Number" << endl;
    }
    else
    {
        cout << "This is not Even Number" << endl;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the Number ::" << endl;
    cin >> n;
    check(n);
    return 0;
}
