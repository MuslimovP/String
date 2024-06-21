#include "String.h"

int main() 
{
    // ������ ������������� ������������ �� ���������
    String defaultString;
    defaultString.input();
    defaultString.output();

    // ������ ������������� ������������ � ����������
    String sizedString(50);
    sizedString.input();
    sizedString.output();

    // ������ ������������� ������������ � ��������������
    String initString("Hello, world!");
    initString.output();

    // ������ ������������� ������������ �����������
    String copyString(initString);
    copyString.output();

    // ������ ������������� ��������� ������������
    String assignedString;
    assignedString = initString;
    assignedString.output();

    return 0;
}