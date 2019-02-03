// Hyunjung Kim(148297179)

#ifndef SICT_LIST_H
#include <iostream>
using namespace std;

namespace sict {

	template <class T, size_t N>
	class List {
		T array[N];
		size_t a_num{ 0u };
	public:
		size_t size() const {
			return a_num;
		}
		const T& operator[](size_t i)const {
			const T& t = array[i];
			return t;
		}
		void operator+=(const T& t) {
			if (N > a_num)
			{
				array[a_num++] = t;
			
			}
		}
	};
}



#endif // !SICT_LIST_H
