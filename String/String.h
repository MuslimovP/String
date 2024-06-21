#pragma once

class String 
{
private:
    char* str;
    int length;

public:
    // ����������� �� ���������
    String();

    // ����������� � ���������� ��� ������������� ������� ������
    String(int size);

    // �����������, ���������������� ������ ��������� �� ������������
    String(const char* initStr);

    // ����������� �����������
    String(const String& other);

    // �������� ������������
    String& operator=(const String& other);

    // ����������
    ~String();

    // ������ ��� ����� � ������ �����
    void input();
    void output() const;

    // ��������� ����� ������
    int getLength() const;

    // ��������� ������
    const char* getStr() const;
};


