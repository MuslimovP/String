#include "String.h"

int main() 
{
    // Пример использования конструктора по умолчанию
    String defaultString;
    defaultString.input();
    defaultString.output();

    // Пример использования конструктора с параметром
    String sizedString(50);
    sizedString.input();
    sizedString.output();

    // Пример использования конструктора с инициализацией
    String initString("Hello, world!");
    initString.output();

    // Пример использования конструктора копирования
    String copyString(initString);
    copyString.output();

    // Пример использования оператора присваивания
    String assignedString;
    assignedString = initString;
    assignedString.output();

    return 0;
}