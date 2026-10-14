
#include "pch.h"
#include "CppUnitTest.h"

double p(double x);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestPZero)
        {
            double t = p(0.0);
            Assert::AreEqual(1.0, t, 0.0001);
        }

        TEST_METHOD(TestPOne)
        {
            double t = p(1.0);
            double expected = 1 + sin(1.0) * sin(1.0);

            Assert::AreEqual(expected, t, 0.0001);
        }

        TEST_METHOD(TestPNegative)
        {
            double t = p(-1.0);
            double expected = 1 + sin(-1.0) * sin(-1.0);

            Assert::AreEqual(expected, t, 0.0001);
        }
    };
}
