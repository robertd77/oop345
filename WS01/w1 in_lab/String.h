/*********************************
Name: Hyunjung Kim
Student Number: 148297179
*********************************/
#ifndef SICT_STRING_H
#define SICT_STRING_H
#include <iostream>
#include <cstring>
namespace sict {
	const int MAX = 3;
	class String {
	private:
		char *n_str;
	
	public:
		String(const char*);
		~String();
		void display(std::ostream& out)const;
	};
	std::ostream& operator<<(std::ostream&, const String&);
}
#endif
