#include <iostream>

void print(const int array[], int array_size, std::string separator = " ") {
	for (int i = 0; i < array_size - 1; i++) {
        	std::cout << array[i] << separator;
    }
    std::cout << array[array_size - 1];
    std::cout << std::endl;
}

void reverse(int array[], int array_size) {
    int start = 0;
    int end = array_size - 1;
    while (start < end) {
        int tmp = array[start];
        array[start] = array[end];
        array[end] = tmp;
        start++;
        end--;
    }
}

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	constexpr int array_size = sizeof(array) / sizeof(array[0]);
	
	std::cout << "До функции reverse: ";
	print(array, array_size);
	
	reverse(array, array_size);
	
	std::cout << "После функции reverse: ";
	print(array, array_size);
}

