#pragma once

class String 
{
private:
    char* str;
    int length;

public:
    // Конструктор по умолчанию
    String();

    // Конструктор с параметром для произвольного размера строки
    String(int size);

    // Конструктор, инициализирующий строку значением от пользователя
    String(const char* initStr);

    // Конструктор копирования
    String(const String& other);

    // Оператор присваивания
    String& operator=(const String& other);

    // Деструктор
    ~String();

    // Методы для ввода и вывода строк
    void input();
    void output() const;

    // Получение длины строки
    int getLength() const;

    // Получение строки
    const char* getStr() const;
};


