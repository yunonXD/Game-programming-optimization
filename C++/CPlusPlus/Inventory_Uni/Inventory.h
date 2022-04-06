#pragma once

//기존 동적 메모리 할당 구조를 표준컨테이너 및 스마트 포인터를 사용하여
//
//5가지 특수 멤버 함수가 필요없도록 변경해보기



struct Item
{
	Item() : id(-100){}

	int id;
};

class Inventory
{
	//유니폼 초기화 한다면? { ~~ } 이런식으로!
public:
	Inventory(int itemNum);
	Inventory(Inventory const & Copy) = default;
	~Inventory() = default;

public:
	Inventory& operator=(Inventory const & rhs);
	Item& operator[](const int index);

public:
	void AddItem(int index, int itemID);
	void RemoveItem(int index);
	void SwapItem(int target1, int target2);

private:
	Item* mItems = nullptr;
	int mItemNum{0};
};




