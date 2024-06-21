#include "String.h"
#include <iostream>

using namespace std;

// Конструктор по умолчанию
String::String() : String(80) {}

// Конструктор с параметром для произвольного размера строки
String::String(int size) 
{
    length = size;
    str = new char[length + 1];
    str[0] = '\0'; // Инициализация пустой строки
}

// Конструктор, инициализирующий строку значением от пользователя
String::String(const char* initStr) 
{
    length = strlen(initStr);
    str = new char[length + 1];
    strcpy_s(str, length + 1, initStr);
}

// Конструктор копирования
String::String(const String& other) 
{
    length = other.length;
    str = new char[length + 1];
    strcpy_s(str, length + 1, other.str);
}

// Оператор присваивания
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

// Деструктор
String::~String() 
{
    delete[] str;
}

// Метод для ввода строки с клавиатуры
void String::input() 
{
    std::cout << "Enter a string: ";
    std::cin.getline(str, length + 1);
}

// Метод для вывода строки на экран
void String::output() const 
{
    std::cout << str << std::endl;
}

// Получение длины строки
int String::getLength() const 
{
    return length;
}

// Получение строки
const char* String::getStr() const
{
    return str;
}