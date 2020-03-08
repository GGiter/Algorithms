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
	// calculate interval
	int interval;
	for (interval = 1; interval < array.size(); interval = 3 * interval + 1);
	interval /= 9;
	if (!interval)
	{
		interval++;
	}

	while (interval)
	{
		for (int i = interval ; i < array.size(); ++i)
		{
			int temp = array[i];
			int j;

			for (j = i ; j >= interval && array[j - interval] > temp; j-= interval)
			{
				array[j ] = array[j - interval];
			}

			array[j] = temp;
		}

		--interval;
	}
	
}