// wordle-helper-cplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <iterator>
#include <string>
#include <vector>
#include <cstdlib>

int main()
{
 /*   std::cout << "Hello World!\n";*/
	char repeat = 'y';

	while (true) {
	srand(time(0));
	int arr_size = rand() % 10 + 1;
	printf("Array size is: %d\n", arr_size);
	std::vector<int> arr(arr_size, 0);
	
	for (int i = 0; i < arr_size; i++) {
		int rNum = rand() % 100 + 1;
		arr[i] = rNum;
	}

	printf("Elements in array are:\n");
	for (int i : arr) {
		printf("%d\n", i);
	}
	printf("Repeat?(y/n): ");
	std::cin >> repeat;

	if (repeat != 'y') {
		break;
	}
	}

}
