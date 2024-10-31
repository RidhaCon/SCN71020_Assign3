#include "pch.h"
#include "CppUnitTest.h"



extern "C" const char* result(const char* player1, const char* player2);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace Assign3Test
{
	TEST_CLASS(Assign3Test)
	{
	public:
		
		TEST_METHOD(Draw_Test)
		{
			const char* Final = result("Paper", "Paper");
			
			Assert::AreEqual("Draw", Final);
		}
		
	};
}
