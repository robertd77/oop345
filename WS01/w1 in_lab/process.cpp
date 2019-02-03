/*********************************
Name: Hyunjung Kim
Student Number: 148297179
*********************************/
// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// process.cpp
// Chris Szalwinski
// 2019/01/08

#include <iostream>
#include "String.h"
#include "Process.h"

namespace sict {
	void process(const char* str) {
		String a = String(str);
		std::cout << a << std::endl;
	}
}
