// Write a function to print names of students whose grade is greater than 5.0.

#include <bits/stdc++.h>
using namespace std;
struct student
{
    char name[10];
    float grade;
};
void gradesystem(struct student s1[], int i, int n)
{
    float grade = 5.0;
    for (i = 0; i < n; i++)
    {
        if (s1[i].grade > grade)
        {
            cout << "The Student Who're Pass In This Exam" << endl;
            cout << "Name ::"
                 << " " << s1[i].name << "Grade ::"
                 << " " << s1[i].grade << endl;
        }
        else
        {

            cout << "The Student Who're Fail In This Exam" << endl;
            cout << "Name ::"
                 << " " << s1[i].name << "Grade ::"
                 << " " << s1[i].grade << endl;
        }
    }
}
int main(int argc, char const *argv[])
{

    int n, i;
    cout << "Enter a number ::" << endl;
    cin >> n;
    struct student s1[n];

    cout << "Enter the student's Name & Grade of student ::" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> s1[i].name >> s1[i].grade;
    }
    gradesystem(s1, i, n);
    // {
    // for (int i = 0; i < n; i++)
    // {
    // cout << s1[i].name << " " << s1[i].grade << " " << endl;
    // }
    // }
    return 0;
}
