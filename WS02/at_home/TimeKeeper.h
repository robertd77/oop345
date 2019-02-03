// Workshop 2 - Copy and Move Semantics
// w2.cpp
// Hyunjung Kim
// 148297179
// 2019/01/24
#ifndef SICT_TIMEKEEPER_H
#define SICT_TIMEKEEPER_H
#include <iostream>
#include <chrono>

namespace sict {
	const int MAX_RECORDS = 10;
	class Timekeeper {
		int num{ 0 };
		std::chrono::steady_clock::time_point start_time;
		std::chrono::steady_clock::time_point end_time;
		struct {
			const char * msg;
			const char * unit;
			std::chrono::steady_clock::duration duration;
		} record[MAX_RECORDS];
	public:
		Timekeeper();
		void start();
		void stop();
		void recordEvent(const char*);
		void report(std::ostream&) const;
	};

}
#endif