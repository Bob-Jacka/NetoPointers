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
	int some_array_2[] = {6, 5, 4, 8};
	int some_array_3[] = {1, 4, 3, 7, 5};
	
	print(some_array_1, 9);
	print(some_array_2, 4);
	print(some_array_3, 5);
}
