#pragma once
#include <iostream>
class String
{
public:
	String(const char* data);	// ����������������� �����������
	~String();	// ����������
	String(String& other); // ����������� �����������
	String& operator=(String& other);	// ���������� ��������� ������������

	//String& operator=(const char* other);	

	// s[i]	== s.operator[](i);
	char operator[](size_t index);

	//str = str1;
	//std::cout << s._data;
	friend std::ostream& operator<<(std::ostream& os, String& s) {
		for (size_t i = 0; i < strlen(s._data); i++) {
			os << s[i];
		}
		return os;
	}

	//String operator+(String& other);



private:
	char* _data = nullptr;

};

