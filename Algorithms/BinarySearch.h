#include <iostream>
#include <vector>

int binary_search(const int& start,const int& end,const int& value,const std::vector<int>& array)
{
	if (start > end)
		return -1;
	
	int mid = (start + end - 1) / 2;

	if (array[mid] == value)
		return mid;
	else if (array[mid] > value)
		return binary_search(start, mid - 1, value, array);
	else
		return binary_search(mid + 1, end, value, array);
}

