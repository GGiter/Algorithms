// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "BinarySearch.h"

int main()
{
	std::vector<int> data{ 1, 2, 3, 4, 5, 6 };

	std::cout << binary_search(0, data.size() -1, 4, data);
}

