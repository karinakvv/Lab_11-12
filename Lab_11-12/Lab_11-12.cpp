// Lab_11-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Створити лінійний односпрямований список із цілих чисел. Додати до списку число 66 після кожного елемента
// з від’ємним значенням

#include <iostream>
#include <windows.h>
#include <forward_list>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	forward_list<int> numberList;
	// Додаємо дійсні числа до списку 
	numberList.push_front(10); 
	numberList.push_front(-7); 
	numberList.push_front(14); 
	numberList.push_front(-1); 
	numberList.push_front(-20); 
	numberList.push_front(8);
	forward_list<int> result;
	for (int number : numberList) {
		result.push_front(number);
		if (number < 0) {
			result.push_front(66);
		}
	}
	result.reverse();
	cout << "Список цілих чисел: ";
	for (int number: numberList) {
		cout << number << " ";
	}
	cout << endl;
	cout << "Список після вставки числа 66: ";
	for (double number: result) {
		cout << number << " ";
	}
	cout << endl;
	return 0;
	system("pause");
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
