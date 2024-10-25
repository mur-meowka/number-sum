// number sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int numbers_array[10] = { 10, 3, 4, 7, 11, 8, 9, 5, 14, 0 };
	int target = 14;
	int first_index;
	int second_index;
	bool has_found = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (numbers_array[i] + numbers_array[j] == target) {
				first_index =i;
				second_index = j;
				has_found = true;
				break;
			}
		}
		if (has_found == true) {
			break;
		}
	}
	cout << first_index << "; " << second_index;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
