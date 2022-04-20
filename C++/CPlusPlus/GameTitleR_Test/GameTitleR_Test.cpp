#include "pch.h"
#include "CppUnitTest.h"

#include "../GameTitleRental/Customer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameTitleRentalTest01
{
	TEST_CLASS(GameTitleRentalTest01)
	{
	public:

		TEST_METHOD(TestMethod_�α��Ϲ�Ÿ��Ʋ)
		{
			// title 1, popular 2, daysRented 3 + title 3, regular 0, daysRented 5
			std::wstring statement01 = L"pororo ������ �뿩 ���\n\tGTA5\t3.500000\n\tMonsterHunter: RISE\t15.000000\n���� �뿩��: 18.500000\n���� ����Ʈ: 2\n";


			Customer customer(L"pororo");

			// rental01 - title 1, popular 2, daysRented 3
			int priceCode = 2;
			GameTitle gameTitle01(L"GTA5", priceCode);
			int daysRented = 3;
			Rental rental01(gameTitle01, daysRented);
			customer.addRental(rental01);

			// rental02 - title 3, regular 0, daysRented 5
			priceCode = 0;
			GameTitle gameTitle02(L"MonsterHunter: RISE", priceCode);
			daysRented = 5;
			Rental rental02(gameTitle02, daysRented);
			customer.addRental(rental02);

			std::wstring statement = customer.statement();

			Assert::AreEqual(statement, statement01);
		}

		TEST_METHOD(TestMethod2_�ֽ��α�Ÿ��Ʋ)
		{
			// title 1, newReleased 1, daysRented 1 + title 2, popular 2, daysRented 2
			std::wstring statement02 = L"luffy ������ �뿩 ���\n\tGTA5\t1.500000\n\tCOOKIERUN:KINGDOM\t2.000000\n���� �뿩��: 3.500000\n���� ����Ʈ: 2\n";

			Customer customer(L"luffy");

			// rental01
			int priceCode = 1;
			GameTitle gameTitle01(L"GTA5", priceCode);
			int daysRented = 1;
			Rental rental01(gameTitle01, daysRented);
			customer.addRental(rental01);

			// rental02 - title 2, popular 2, daysRented 2
			priceCode = 2;
			GameTitle gameTitle02(L"COOKIERUN:KINGDOM", priceCode);
			daysRented = 2;
			Rental rental02(gameTitle02, daysRented);
			customer.addRental(rental02);

			std::wstring statement = customer.statement();

			Assert::AreEqual(statement, statement02);
		}
	};
}
