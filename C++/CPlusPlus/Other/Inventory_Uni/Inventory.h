#pragma once

//���� ���� �޸� �Ҵ� ������ ǥ�������̳� �� ����Ʈ �����͸� ����Ͽ�
//
//5���� Ư�� ��� �Լ��� �ʿ������ �����غ���



struct Item
{
	Item() : id(-100){}

	int id;
};

class Inventory
{
	//������ �ʱ�ȭ �Ѵٸ�? { ~~ } �̷�������!
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




