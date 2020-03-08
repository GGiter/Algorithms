#include "pch.h"
#include "../Algorithms/BinaryHeap.h"
#include <algorithm>
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AlgorithmsTests
{
	TEST_CLASS(BinaryHeapTests)
	{
	public:

		TEST_METHOD(Initialization)
		{
			BinaryHeap binary_heap;

			Assert::AreEqual(binary_heap.top(),0);
		}

		TEST_METHOD(Insert)
		{
			BinaryHeap binary_heap;

			std::vector<int> data{ 1, 4, 23, 4, 11, 0 };

			std::vector<int> sorted = data;

			sort(sorted.begin(), sorted.end() , std::greater<int>() );

			for (int i = 0 ; i < data.size(); ++i)
			{
				binary_heap.insert(data[i]);

		
			}

			Assert::AreEqual(binary_heap.top(), sorted[0]);
		}

		TEST_METHOD(Remove)
		{
			BinaryHeap binary_heap;

			std::vector<int> data{ 1, 4, 23, 4, 11, 0 };

			std::vector<int> sorted = data;

			sort(sorted.begin(), sorted.end(), std::greater<int>());

			for (int i = 0; i < data.size(); ++i)
			{
				binary_heap.insert(data[i]);
			}

			for (int i = 0; i < data.size(); ++i)
			{
				Assert::AreEqual(binary_heap.top(), sorted[i]);

				binary_heap.pop();
			}

			
		}
	};
}
