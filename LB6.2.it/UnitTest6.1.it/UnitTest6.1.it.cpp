#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.2.it/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			const int SIZE = 5;
			int arr[SIZE] = { 2, 7, 8, 12, 3 };

			int result = sum(arr, SIZE);
			Assert::AreEqual(32, result);
		}
	};
}
