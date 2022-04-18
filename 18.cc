// Sorting the Structure data using the selection method.

#include <bits/stdc++.h>
using namespace std;
struct student
{
    int rollno;
    char name[10];
    float marks;
};
void sortbymarks(struct student e[], int n)
{
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (e[i].marks > e[j].marks)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int i, n;
    cout << "Enter a number of student data you want to enter ::" << endl;
    cin >> n;
    struct student data[n];
    cout << "Enter the Student Rollno & Name & Marks ::" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> data[i].rollno >> data[i].name >> data[i].marks;
    }

    sortbymarks(data, n);
    {
        for (int i = 0; i < n; i++)
        {
            cout << data[i].rollno << " " << data[i].name << " " << data[i].marks << " " << endl;
        }
    }
    return 0;
}
