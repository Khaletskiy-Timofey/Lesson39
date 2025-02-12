#include "sort.h"

// CPU — O(N^2)
// RAM — O(1)
void bubble_sort(int* numbers, int size)
{
	for (int i = 1; i < size; i++)
	{
		bool isSorted = true;
		int size_minus_i = size - i;

		for (int j = 0; j < size_minus_i; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				isSorted = false;
				int t = numbers[j + 1];
				numbers[j + 1] = numbers[j]; 
				numbers[j] = t;
			}
		}

		if (isSorted)
		{
			break;
		}
	}
}

int find_min_elemment_index(int* numbers, int size, int start_index)
{
	int min_index = start_index;

	for (int i = start_index + 1; i < size; i++)
	{
		if (numbers[i] < numbers[min_index])
		{
			min_index = i;
		}
	}

	return min_index;
}

// CPU — O(N^2)
// RAM — O(1)
void selected_sort(int* numbers, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min_index = find_min_elemment_index(numbers, size, i);
		int t = numbers[i];
		numbers[i] = numbers[min_index];
		numbers[min_index] = t;
	}
}