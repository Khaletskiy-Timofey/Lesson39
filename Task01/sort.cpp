#include "sort.h"

void bubble_sort(int* numbers, int size)
{
	for (int i = 1; i < size; i++)
	{		
		for (int j = 0; j < size - 1; j++)
		{
			if (numbers[j] < numbers[j + 1])
			{
				int t = numbers[j + 1];
				numbers[j + 1] = numbers[j];
				numbers[j] = t;
			}
		}
	}
}