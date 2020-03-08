#pragma once

#include<iostream>
#include<vector>


void merge(std::vector<int>& array, const int& left, const int& right)
{
	int mid = (right + left) / 2;

	int i, j, k;
	i = 0, j = 0, k = left;


	std::vector<int> L(array.begin() + left, array.begin() + mid + 1), R(array.begin() + mid + 1, array.begin() + right + 1);

	while (i < L.size() && j < R.size())
	{
		if (L[i] <= R[j])
		{
			array[k] = L[i];
			i++;
		}
		else
		{
			array[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < L.size())
	{
		array[k] = L[i];
		i++;
		k++;
	}

	while (j < R.size())
	{
		array[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(std::vector<int>& array, const int& left, const int& right)
{
	if (right > left)
	{
		int mid = (right + left) / 2;

		merge_sort(array, left, mid);

		merge_sort(array, mid + 1, right);

		merge(array, left, right);
	}
}

