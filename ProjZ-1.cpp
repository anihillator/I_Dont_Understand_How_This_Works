#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int size;
	cout << "Input array size\n";
	cin >> size;
	bool pivotChoice = 0;
	cout << "\n\nPress 0 to make pivot random, 1 to make it median\n";
	cin >> pivotChoice;
	bool OutUnsorted = 0;
	cout << "\n\nPress 1 if you want to output unsorted array\n";
	cin >> OutUnsorted;


	_getch();
	return 0;
}

