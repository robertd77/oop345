// Workshop 2 - Copy and Move Semantics
// w2.cpp
// Hyunjung Kim
// 2019/01/24

#ifndef SICT_TEXT_H
#define SICT_TEXT_H

namespace sict {
	class Text {
		int line_num = 0;
		std::string* content;
		
	public:
		Text();
		Text(const char*);
		Text(const Text&);
		Text& operator = (const Text&);
		~Text();
		size_t size() const;

	};
}
#endif // !SICT_TEXT_H