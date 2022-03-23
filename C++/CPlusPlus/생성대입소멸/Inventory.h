#pragma once
#include <iostream>
#include <exception>
#include <vector>
using namespace std;

class Inventory
{

	template<typename Conrainer, typename Index>
	decltype(auto) pauseAndAccess(Conrainer&& c, Index i) {
		pause();
		std::forward<Conrainer><c>[i];
	}
	//decltype 추가


public:
	Inventory(int myInven);
	~Inventory();

	vector<int> myInven;
	int Item;

	//itemID
	//slitIndex
	string ItemName;
	string ItemState;


private:

	//Item* m_Items = nullptr;

};

//생성자
Inventory::Inventory(int itemNum) {
	//m_Items = new Item[itemNum]
}


class FullItem : public exception {
public:
	FullItem(string Except) : mExcept(Except) {
	}

	virtual const char* what() const noexcept override {
		return mErrorMessage.c_str();
	}
	string getFileName() const noexcept {
		return mExcept;
	}

protected:
	void SetErrorMessage(string message) {
		mErrorMessage = message;
		
		mErrorMessage = "This storage is alreadt full dude";
		//cout << "This storage is alreadt full dude " << endl;

	}

private:
	string mExcept;
	string mErrorMessage;
};

class CantRemoveItem : public exception {
public:
	CantRemoveItem(string Except) : mExcept(Except) {
	}

	virtual const char* what() const noexcept override {
		return mErrorMessage.c_str();
	}
	string getFileName() const noexcept {
		return mExcept;
	}

protected:
	void SetErrorMessage(string message) {
		mErrorMessage = message;

		mErrorMessage = "You Cant remove this Irem bcus for quest.";
		//cout << "This storage is alreadt full dude " << endl;

	}

private:
	string mExcept;
	string mErrorMessage;
};

class swapItem : public exception {
public:
	swapItem(string Except) : mExcept(Except) {
	}

	virtual const char* what() const noexcept override {
		return mErrorMessage.c_str();
	}
	string getFileName() const noexcept {
		return mExcept;
	}

protected:
	void SetErrorMessage(string message) {
		mErrorMessage = message;

		mErrorMessage = "You cant swap this item before the own calim.";
		//cout << "This storage is alreadt full dude " << endl;

	}

private:
	string mExcept;
	string mErrorMessage;
};

