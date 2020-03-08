// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "BinarySearch.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "BinaryHeap.h"

void print_array(const std::vector<int>& array)
{
	for (int value : array)
	{
		std::cout << value <<" ";
	}
}

int main()
{
	std::vector<int> data{ 1, 4, 23, 4, 11, 0 };

	int key = 4;
	switch (key)
	{
		case 0:
		{
			std::cout << binary_search(0, data.size() - 1, 4, data) << std::endl;
			break;
		}
		case 1:
		{
			shell_sort(data);
			print_array(data);
			break;
		}
		case 2:
		{
			merge_sort(data, 0, data.size() - 1);
			print_array(data);
			break;
		}
		case 3:
		{
			quick_sort(data, 0, data.size() - 1);
			print_array(data);
			break;
		}
		case 4:
		{
			BinaryHeap binary_heap;
			for (int value : data)
			{
				binary_heap.insert(value);
			}
			std::cout << binary_heap.top();
			break;
		}
		

	}
}

