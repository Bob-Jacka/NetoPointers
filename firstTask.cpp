#include <iostream>

using namespace std;

void print(int array[], int array_size, string separator = " ") {
	for (int i = 0; i < array_size - 1; i++) {
        	cout << array[i] << separator;
    }
    cout << array[array_size - 1];
    cout << endl;
}

int main(int argc, char** argv)
{
	int some_array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	constexpr int array_size_1 = sizeof(some_array_1) / sizeof(some_array_1[0]);
	
	int some_array_2[] = {6, 5, 4, 8};
	constexpr int array_size_2 = sizeof(some_array_2) / sizeof(some_array_2[0]);
	
	int some_array_3[] = {1, 4, 3, 7, 5};
	constexpr int array_size_3 = sizeof(some_array_3) / sizeof(some_array_3[0]);
	
	print(some_array_1, array_size_1);
	print(some_array_2, array_size_2);
	print(some_array_3, array_size_3);
}
