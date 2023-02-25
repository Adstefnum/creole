#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Vector3Tests)
	{
	public:
		
        TEST_METHOD(ShouldReturnMagnitudeThree) {
            Vector3 v(1, 2, 2);
            float actualMagnitude = v.magnitude();
            Assert::AreEqual(3.0f, actualMagnitude);
        }

        TEST_METHOD(ShouldReturnCorrectDotProduct) {
            Vector3 a(1, 2, 3);
            Vector3 b(-4, 5, -6);
            float actualDotProduct = a.dot(b);
            Assert::AreEqual(-12.0f, actualDotProduct);
        }

        TEST_METHOD(ShouldReturnCorrectCrossProduct) {
            Vector3 a(1, 2, 3);
            Vector3 b(-4, 5, -6);
            Vector3 c = a.cross(b);
            Assert::AreEqual(-27.0f, c.x);
            Assert::AreEqual(-6.0f, c.y);
            Assert::AreEqual(13.0f, c.z);
        }   

        TEST_METHOD(ShouldReturnNormalizedVector)
        {
            Vector3 v(3, 4, 0);
            Vector3 result = v.normalized();
            Assert::AreEqual(0.6f, result.x, 0.001f);
            Assert::AreEqual(0.8f, result.y, 0.001f);
            Assert::AreEqual(0.0f, result.z, 0.001f);
        }

        TEST_METHOD(TestVectorAddition)
        {
            Vector3 v1(1.0f, 2.0f, 3.0f);
            Vector3 v2(4.0f, 5.0f, 6.0f);
            Vector3 result = v1 + v2;
            Assert::AreEqual(5.0f, result.x, 0.001f);
            Assert::AreEqual(7.0f, result.y, 0.001f);
            Assert::AreEqual(9.0f, result.z, 0.001f);
        }

        TEST_METHOD(TestVectorSubtraction)
        {
            Vector3 v1(1.0f, 2.0f, 3.0f);
            Vector3 v2(4.0f, 5.0f, 6.0f);
            Vector3 result = v1 - v2;
            Assert::AreEqual(-3.0f, result.x, 0.001f);
            Assert::AreEqual(-3.0f, result.y, 0.001f);
            Assert::AreEqual(-3.0f, result.z, 0.001f);
        }

        TEST_METHOD(TestVectorScalarMultiplication)
        {
            Vector3 v(1.0f, 2.0f, 3.0f);
            float scalar = 2.0f;
            Vector3 result = v * scalar;
            Assert::AreEqual(2.0f, result.x, 0.001f);
            Assert::AreEqual(4.0f, result.y, 0.001f);
            Assert::AreEqual(6.0f, result.z, 0.001f);
        }
	};
}
