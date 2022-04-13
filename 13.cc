// Enter N Elements and Find out the Maximum and Minimum value using Array

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, max = 0, min;
    cout << "Enter the length of the array ::" << endl;
    cin >> a;

    int b[a];

    for (int i = 0; i < a; i++)
    {
        cout << "Your Number is ::" << endl;
        cin >> b[i];

        if (b[i] > max)
        {
            max = b[i];
        }
        if (b[i] < min)
        {
            min = b[i];
        }
    }
    cout << "The Maximum value is ::" << max << endl;
    cout << "The Minimum value is ::" << min << endl;
    return 0;
}
