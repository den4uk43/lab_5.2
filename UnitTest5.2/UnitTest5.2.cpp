#include "pch.h"
#include "CppUnitTest.h"
#include "E:/ap_labs/PR5.2/PR5.2/lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1.0, 1, 1.0);
			Assert::AreEqual(t, -1.0 / 6.0, 0.0001);
		}
	};
}
