#include "pch.h"
#include "CppUnitTest.h"

double p(double x);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t;
            t = p(0.0);

            
            Assert::AreEqual(t, 1.0, 0.0001);
        }
    };
}