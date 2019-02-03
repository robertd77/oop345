// Workshop 2 - Copy and Move Semantics
// w2.cpp
// Hyunjung Kim
// 2019/01/24

#include <iostream>
#include <chrono>
#include <iomanip>
#include"Timekeeper.h"
using namespace std;

namespace sict {

	Timekeeper::Timekeeper() {}
	void Timekeeper::start() {
		start_time = std::chrono::steady_clock::now();
	}
	void Timekeeper::stop() {
		end_time = std::chrono::steady_clock::now();
	}
	void Timekeeper::recordEvent(const char* str) {
		auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
		if (num < MAX_RECORDS)
		{
			record[num].duration = ms;
			record[num].msg = str;
			record[num].unit = " seconds";
			num++;
		}
	}
	void Timekeeper::report(std::ostream& os) const{
		os << "\nExecution Times:" << endl;
		for (int i = 0; i < num; i++)
		{
			os << record[i].msg << ' ' << setw(5) <<
				record[i].duration.count() /1000000 << " " << record[i].unit << endl;
		}
	}
}