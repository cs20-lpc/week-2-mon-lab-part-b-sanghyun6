#include "Student.hpp"
#include <iostream>
using namespace std;

// 생성자
Student::Student()
{
    cout << "Student object created!" << endl;
}

// 소멸자
Student::~Student()
{
    cout << "Student object destroyed!" << endl;
}

// 이름 설정
void Student::setName(string n)
{
    name = n;
}

// 나이 설정
void Student::setAge(int a)
{
    age = a;
}

// 이름 반환
string Student::getName() const
{
    return name;
}

// 나이 반환
int Student::getAge() const
{
    return age;
}
