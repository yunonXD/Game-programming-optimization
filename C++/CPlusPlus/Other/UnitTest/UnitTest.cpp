#include "pch.h"
#include "CppUnitTest.h"
#include "Customer.h"
#include "Inventory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			int i = 2;
			int j = 0;
			int actual = i * j;
			Assert::AreEqual(0, actual);
		}

		//TEST_METHOD(TestMethod2_sumTest)
		//{

		//	int i = 13;
		//	int j = 1;
		//	int actual = i + j;
		//	Assert::AreEqual(14, actual);		//AreNotEqual = 다른지 확인.
		//}

		//TEST_METHOD(TestMethod3_nameSetting)
		//{
		//	std::string name = "Luffy";
		//	Customer customer(name);
		//	Assert::AreEqual(name, customer.getName());

		//
		//}

		TEST_METHOD(TestMethod4_nameSetting) {

			Inventory inventory(5);
			Inventory inventory(invenSize);

			
			Assert::AreEqual(invenSize, inventory.());


		}



	};
}
