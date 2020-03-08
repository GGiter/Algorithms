#include "pch.h"
#include "../Algorithms/ShellSort.h"
#include "../Algorithms/MergeSort.h"
#include "../Algorithms/QuickSort.h"
#include <algorithm>
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AlgorithmsTests
{
	TEST_CLASS(SortTests)
	{
	public:

		TEST_METHOD(ShellSort)
		{
			std::vector<int> data{ 1, 4, 23, 4, 11, 0 };

			std::vector<int> sorted = data;

			sort(sorted.begin(), sorted.end());

			shell_sort(data);

			for (int i = 0; i < data.size(); ++i)
			{
				Assert::AreEqual(data[i], sorted[i]);
			}
		}

		TEST_METHOD(MergeSort)
		{

			std::vector<int> data{ 1, 4, 23, 4, 11, 0 };

			std::vector<int> sorted = data;

			sort(sorted.begin(), sorted.end());

			merge_sort(data,0,data.size()-1);

			for (int i = 0; i < data.size(); ++i)
			{	
				Assert::AreEqual(data[i], sorted[i]);
			}	
		}

		TEST_METHOD(QuickSort)
		{
			std::vector<int> data{ 1, 4, 23, 4, 11, 0 };

			std::vector<int> sorted = data;

			sort(sorted.begin(), sorted.end());

			quick_sort(data, 0, data.size() - 1);

			for (int i = 0; i < data.size(); ++i)
			{
				Assert::AreEqual(data[i], sorted[i]);
			}
		}
	};
}