#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.1/Money.h"
#include "D:\project C++ 2\lab 1.1\lab 1.1\Money.cpp"
#include "D:\project C++ 2\lab 1.1\lab 1.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Money m{};
			m.Init(100, 5); 
			int expectedSum = 500; // Очікувана сума (100 * 5)
			int actualSum = m.summa(); // Отримуємо суму грошей
			Assert::AreEqual(expectedSum, actualSum); // Перевіряємо, чи співпадають очікувана та отримана суми
		}
	};
}
