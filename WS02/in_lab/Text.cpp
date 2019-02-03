// Workshop 2 - Copy and Move Semantics
// w2.cpp
// Hyunjung Kim
// 2019/01/24

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
#include "Text.h"
#include "Timekeeper.h"
using namespace std;

 
namespace sict {
	Text::Text(){
		content = nullptr;
	}
	
	Text::Text(const char* filename){
	
		ifstream file(filename);
		string t_line;
		string* t_file;
		size_t line = 0;
		
		if (file.is_open())
		{
			
			while (getline(file, t_line))
			{
				++line;
			}

			t_file = new string[line];
			file.clear();
			file.seekg(0);
			
			for (size_t i = 0; i < line; ++i)
			{
				getline(file, t_file[i]);
			}
			this->line_num = line;
			this->content = t_file;
		}

	
	}
	Text::Text(const Text& obj) {
		
		*this = obj;
	}
	Text& Text::operator = (const Text& obj) {
		if (this != &obj)
		{
			line_num = obj.line_num;
			delete[] content;
			content = new string[line_num];
			for (int i = 0; i < line_num; ++i)
			{
				content[i] = obj.content[i];
			}

		}
		return *this;
	}
	Text::~Text() {
		delete[] content;
		content = nullptr;
	}
	size_t Text::size() const {
		return line_num;
	}
}