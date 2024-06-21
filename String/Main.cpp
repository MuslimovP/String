#include "String.h"

int main() 
{
    // ѕример использовани€ конструктора по умолчанию
    String defaultString;
    defaultString.input();
    defaultString.output();

    // ѕример использовани€ конструктора с параметром
    String sizedString(50);
    sizedString.input();
    sizedString.output();

    // ѕример использовани€ конструктора с инициализацией
    String initString("Hello, world!");
    initString.output();

    // ѕример использовани€ конструктора копировани€
    String copyString(initString);
    copyString.output();

    // ѕример использовани€ оператора присваивани€
    String assignedString;
    assignedString = initString;
    assignedString.output();

    return 0;
}