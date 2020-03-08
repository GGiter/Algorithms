#pragma once

#include<iostream>
#include<algorithm>
#include<vector>

class BinaryHeap
{
public:
	int top()
	{
		if (array.size() > 0)
		{
			return array[0];
		}

		return 0;
	}

	void insert(int value)
	{
		int index = array.size();
		array.push_back(value);

		while (index != 0 && array[parent(index)] < array[index])
		{
			std::swap(array[index], array[parent(index)]);
			index = parent(index);
		}
	}
	void pop()
	{
		if (array.size() == 0)
			return;

		array[0] = array.back();
		array.pop_back();

		int index = 0;
		int largest = 0;

		do
		{
			int l = left(index);
			int r = right(index);

			if (l < array.size() && array[l] > array[index])
				largest = l;

			if (r < array.size() && array[r] > array[largest])
				largest = r;

			if (largest != index) {
				std::swap(array[index], array[largest]);

				index = largest;
			}
		} while (largest != index);
	}
protected:
	int parent(int index) { return (index - 1) / 2; }

	int left(int index) { return (index * 2 + 1); }

	int right(int index) { return (index * 2 + 2); }
private:
	std::vector<int> array;

};