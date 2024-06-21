#include "String.h"
#include <iostream>

using namespace std;

// ����������� �� ���������
String::String() : String(80) {}

// ����������� � ���������� ��� ������������� ������� ������
String::String(int size) 
{
    length = size;
    str = new char[length + 1];
    str[0] = '\0'; // ������������� ������ ������
}

// �����������, ���������������� ������ ��������� �� ������������
String::String(const char* initStr) 
{
    length = strlen(initStr);
    str = new char[length + 1];
    strcpy_s(str, length + 1, initStr);
}

// ����������� �����������
String::String(const String& other) 
{
    length = other.length;
    str = new char[length + 1];
    strcpy_s(str, length + 1, other.str);
}

// �������� ������������
String& String::operator=(const String& other) 
{
    if (this != &other) 
    {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }
    return *this;
}

// ����������
String::~String() 
{
    delete[] str;
}

// ����� ��� ����� ������ � ����������
void String::input() 
{
    std::cout << "Enter a string: ";
    std::cin.getline(str, length + 1);
}

// ����� ��� ������ ������ �� �����
void String::output() const 
{
    std::cout << str << std::endl;
}

// ��������� ����� ������
int String::getLength() const 
{
    return length;
}

// ��������� ������
const char* String::getStr() const
{
    return str;
}