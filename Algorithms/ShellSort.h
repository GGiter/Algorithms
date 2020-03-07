#pragma once

#include<iostream>
#include<vector>

void insertion_sort(std::vector<int> & array)
{
	int temp, j;
	for (size_t i = 1; i < array.size(); ++i)
	{
		temp = array[i];

		for (j = i - 1; j >= 0 && array[j] > temp; --j)
		{
			array[j + 1] = array[j];
		}

		array[j + 1] = temp;
	}
}

void shell_sort(std::vector<int> & array)
{
	int interval = array.size() / 2;
	while (interval)
	{
		for (int i = array.size() - interval ; i >= 0; --i)
		{
			int temp = array[i];
			int j;

			for (j = i - 1; j >= 0 && array[j] > temp; j-= interval)
			{
				array[j + 1] = array[j];
			}

			array[j + 1] = temp;
		}

		--interval;
	}
	
}