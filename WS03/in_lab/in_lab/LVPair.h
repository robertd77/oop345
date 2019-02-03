// Hyunjung Kim(148297179)

#ifndef SICT_LVPAIR_H
#define SICT_LVPAIR_H
#include <iostream>
using namespace std;
namespace sict {
	template<typename L, typename V>
	class LVPair {
		L t_label;
		V t_value;
	public:
		LVPair() : t_label(), t_value() {}
		LVPair(const L& label, const V& value){
			t_label = label;
			t_value = value;
		}
		void display(std::ostream& os) const{
			os << t_label << " : " << t_value << endl;
		}
	};
	
	template<typename L, typename V>
	std::ostream& operator<<(std::ostream& os, const LVPair<L, V>& pair){
			pair.display(os);
			return os;
	}
}
#endif // !SICT_LVPAIR_H