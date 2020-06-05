#include <iostream>
#include <string>
#include <sstream>
#include <string.h>
using namespace std;
class Student
{
protected:
    string strName;
    int iAge;
    float fMath, fLit;
    float fAver;

public:
    Student() {}
    virtual void Input()
    {
        cin.ignore();
        getline(cin, strName);
        fMath = fLit = 0;
    }

    void SetAge(int n)
    {
        iAge = n;
    }
    virtual float Average()
    {
        return 0;
    }
    virtual ostream &operator<<(ostream &os)
    {
        os << strName << " " << iAge << " ";
        return os;
    }
    virtual string to_string()
    {
        stringstream ss;
        ss << "Name: " << strName << ", Grade: " << iAge;
        return ss.str();
    }
};
class Student6_7 : public Student
{
private:
    float fEco;

public:
    Student6_7() {}
    void Input()
    {
        Student::Input();
        cin >> fMath >> fLit >> fEco;
    }
    float Average()
    {
        fAver = (fMath + fLit + fEco) / 3;
        return fAver;
    }
    ostream &operator<<(ostream &os)
    {
        os << strName << " " << iAge << " " << fMath << " " << fLit << " " << fEco << " " << fAver << endl;
        return os;
    }
    string to_string()
    {
        stringstream ss;
        ss << "Name: " << strName << ", Grade: " << iAge << ", Math: " << fMath << ", Literater: " << fLit << ", Behavior: " << fEco << ", Ave: " << fAver;
        return ss.str();
    }
};
class Student8_9 : public Student
{
private:
    float fPhy, fChem;

public:
    Student8_9() {}
    void Input()
    {
        Student::Input();
        cin >> fMath >> fLit >> fPhy >> fChem;
    }
    float Average()
    {
        fAver = (fMath + fLit + fPhy + fChem) / 4;
        return fAver;
    }
    ostream &operator<<(ostream &os)
    {
        os << strName << " " << iAge << fMath << " " << fLit << " " << fPhy << " " << fChem << " " << fAver << endl;
    }
    string to_string()
    {
        stringstream ss;
        ss << "Name: " << strName << ", Grade: " << iAge << ", Math: " << fMath << ", Literater: " << fLit << ", Physic: " << fPhy << ", Chemistry: " << fChem << ", Ave: " << fAver;
        return ss.str();
    }
};
class Student10_11_12 : public Student
{
private:
    float fEng;

public:
    Student10_11_12() {}
    void Input()
    {
        Student::Input();
        cin >> fMath >> fLit >> fEng;
    }
    float Average()
    {
        fAver = (fMath + fLit + fEng) / 3;
        return fAver;
    }
    ostream &operator<<(ostream &os)
    {
        os << strName << " " << iAge << " " << fMath << " " << fLit << " " << fEng << " " << fAver << endl;
        return os;
    }
    string to_string()
    {
        stringstream ss;
        ss << "Name: " << strName << ", Grade: " << iAge << ", Math: " << fMath << ", Literater: " << fLit << ", Behavior: " << fEng << ", Ave: " << fAver;
        return ss.str();
    }
};