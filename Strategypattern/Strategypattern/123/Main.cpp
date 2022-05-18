#include "Character.h"

int main() {
	TestBed m_test;
	int m_answer, m_width;
	cout << "Exit (0) , Knight(1) , mage(2) , Thief(3) : ";
	cin >> m_answer;

	while (m_answer)
	{
		cout << "width : ";
		cin >> m_width;
		m_test.SetFight(m_answer, m_width);
		m_test.SetMove();
		cout << "Exit (0) , Knight(1) , mage(2) , Thief(3) : " ;
		cin >> m_answer;
	}
	return 0;
}