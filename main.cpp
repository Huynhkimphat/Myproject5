#include <iostream>
#include "Student.h"
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<Student *> students;
    int n = 100;
    int iGrade;
    for (int i = 0; i < n; i++)
    {
        cin >> iGrade;
        if (iGrade == 6 || iGrade == 7)
        {
            Student *stu = new Student6_7();
            stu->Input();
            stu->SetAge(iGrade);
            stu->Average();
            students.push_back(stu);
        }
        else if (iGrade == 8 || iGrade == 9)
        {
            Student *stu = new Student8_9();
            stu->Input();
            stu->SetAge(iGrade);
            stu->Average();
            students.push_back(stu);
        }
        else if (iGrade == 10 || iGrade == 11 || iGrade == 12)
        {
            Student *stu = new Student10_11_12();
            stu->Input();
            stu->SetAge(iGrade);
            stu->Average();
            students.push_back(stu);
        }

        else if (iGrade == -1)
        {
            break;
        }
    }
    for (int i = 0; i < students.size(); i++)
    {
        string s = students[i]->to_string();
        cout << s;
    }
    return 0;
}