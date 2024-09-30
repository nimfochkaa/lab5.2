#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 0.5;
			int n = 2;
			double a = 1.0;
			double resultA = A(x, n, a);
			Assert::AreEqual(0.25, resultA, 0.0001);

			double eps = 0.001;
			double s = 0.0;
			double expectedS = log(1 - x);
			double resultS = S(x, eps, n, s);
			Assert::AreEqual(expectedS, -resultS, 0.01);

		}
	};
}
