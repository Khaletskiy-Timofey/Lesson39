#include <iostream>
#include <time.h>
#include "utils.h"
#include "sort.h"

#define SIZE 10

using namespace std;

// Комментарий
int main()
{
	srand(time(0));

	int numbers[SIZE];

	init_array(numbers, SIZE, 0, 100);

	cout << "Before: " << array_to_string(numbers, SIZE) << endl;

	selected_sort(numbers, SIZE);

	cout << "After: " << array_to_string(numbers, SIZE) << endl;

	return 0;
}