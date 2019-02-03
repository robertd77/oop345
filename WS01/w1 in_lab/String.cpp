/*********************************
Name: Hyunjung Kim
Student Number: 148297179
*********************************/
#include <iostream>
#include "String.h"
#define _CRT_SECURE_NO_WARNINGS

extern const int INITIAL;

namespace sict {
	static int num = INITIAL;

	String::String(const char * str)
	{
		if (str != nullptr && str[0] != '\0') {
			n_str = new char[strlen(str) + 1];
			strncpy(n_str, str, strlen(str) + 1);
			n_str[strlen(str)] = '\0';
		}
		else
		{
			n_str = nullptr;
		}

	}
	String::~String() {
		delete [] n_str;
	}
	void String::display(std::ostream& out)const {
		out << n_str;
	}
	std::ostream& operator<<(std::ostream& out, const String& str) {
		out << num << ": ";
		num++;
		str.display(out);
		return out;
	}
}