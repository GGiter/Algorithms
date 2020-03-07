// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "BinarySearch.h"
#include "ShellSort.h"


void print_array(const std::vector<int>& array)
{
	for (int value : array)
	{
		std::cout << value <<" ";
	}
}

int main()
{
	std::vector<int> data{ 1, 2, 3, 4, 5, 6 };

	std::cout << binary_search(0, data.size() - 1, 4, data) << std::endl;
	shell_sort(data);
	print_array(data);
}

