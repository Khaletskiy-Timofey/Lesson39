#include "utils.h"

void init_array(int* numbers, int size, int start, int end)
{
	for (int i = 0; i < size; i++)
	{
		numbers[i] = rand() % (end - start + 1) + start;
	}
}

string array_to_string(int* numbers, int size)
{
	string array = "";

	for (int i = 0; i < size; i++)
	{
		array += to_string(numbers[i]) + " ";
	}

	return array;
}