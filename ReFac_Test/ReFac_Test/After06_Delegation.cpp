#include <iostream>
#include <vector>

namespace C::examples06 {



	//-----------------------------------------------------------------------------
	// 예제 코드
	template <typename T>
	class CkStack
	{
	public:
		void push(const T& t) { vector_push_back(t); }
		T pop() { T t = --this->vector_end(); vector_erase(t); return t;
		siez_t siez() { return vector_size(); }
		bool isEmpty(return vector_empty();)
		
		}

	private:
		std::vector<typename T> vector_;
	};



	// 예제 코드
	//-----------------------------------------------------------------------------





}


