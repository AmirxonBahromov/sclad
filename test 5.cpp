﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int digit = 0;
	double digit2 = 0;
	char symbol = 0;
	bool trueOrFalse = 0;
	cout << "yirik sonni kiriting ";
	cin >> digit;
	cout << "sonni kiriting ";
	cin >> digit2;
	cout << "simvolni kiriting ";
	cin >> symbol;
	cout << "1 yoki nolni kiriting ";
	cin >> trueOrFalse;
	cout << endl << endl;
	cout << "butun son " << digit << endl;
	cout << "yirik bolmagan son kiriting " << digit2 << endl;
	cout << "simvol " << symbol << endl;
	cout << "bool " << trueOrFalse << endl;
	return 0;
}