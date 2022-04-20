#include <iostream>
#include <vector>

namespace C::examples06 {



	//-----------------------------------------------------------------------------
	// 抗力 内靛
	template <typename T>
	class CkStack : public std::vector<typename T>
	{
	public:
		void push(const T& t) { push_back(t); }
		T pop() {

			T t = --this->end();
			erase(t);
			return t;
		}
	};



	// 抗力 内靛
	//-----------------------------------------------------------------------------





}


