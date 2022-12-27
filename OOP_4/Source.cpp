#include <iostream>
#include "String.h"

// ДЗ, где перегрузить операторы. Там написано объявить поле std::string, надо добавить поле int и перегрузить операторы для int и/или std::string(по нашему усмотрению)

int main() {

	//String str;
	//String str1(str;
	// str = str1;
	// str = "abc";
	//std::cout << str << "\n";

	String str("abc");

	std::cout << "First str = " << str << "\n";

	String str1(str);

	String str2("bob");
	str = str2;

	std::cout << "Second str = " << str << "\n";

	String str3("Alice");

	//String str4 = str + str3;

}