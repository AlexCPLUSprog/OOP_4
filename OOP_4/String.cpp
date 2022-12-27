#include "String.h"
#include <cstring>

String::String(const char* data) : _data(new char[strlen(data) + 1]) {	// <- "\0" (+1 это место дл€ нуллтерминатора)
	std::cout << "String(const char* data) constructor\n";
	strcpy(_data, data);
}

String::~String() {
	std::cout << "~String() destructor\n";
	if (_data != nullptr) {
		delete[] _data;
	}
}

String::String(String& other) : _data(new char[strlen(other._data) + 1]) {
	std::cout << "Copy constructor was called\n";
	strcpy(_data, other._data);
}

// s[i] == s._data[i];
char String::operator[](size_t index) {
	return _data[index];
}


// String str("abc);
// String str1("sadasdas");
// str = str1
String& String::operator=(String& other) {
	std::cout << "operator= was called\n";
	if (this != &other) {
		if (_data != nullptr){
			delete[] _data;
	}
	_data = new char[strlen(other._data) + 1];
	strcpy(_data, other._data);
	}
	return *this;
}



// ≈сли работаем с указател€ми, нужно делать проверки на nullptr
/*String String::operator+(String& other) {
	std::cout << "operator+ was called\n";	
	char* newData = new char[strlen(_data) + strlen(other._data) + 1];
	strcpy(newData, _data);	// ¬ newData положит _data и \0	
	strcat(newData, other._data); // убирает из конца newData \0, затем дописывает other._data (в other.data уже лежит \0)	
	String resStr(newData);
	delete[] newData;
	return resStr;
}*/

/*
String& String::operator=(const char* other) {

}
*/



