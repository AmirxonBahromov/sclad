#include <iostream>
using namespace std;

char name[2][80];
char phone[2][20];
float hours[2];
float wage[2];
int menu();
void enter(), report();
int main()
{
	int choice;
	do {
		choice = menu();
		switch (choice) {
		case 0: break;
		case 1: enter();
			break;
		case 2: report();
			break;
		default: cout << "yana urinib koring.\n\n";
		}
	} while (choice != 0);
	return 0;
}
int menu()
{
	int choice;
	cout << "0.dasturdan chiqish\n";
	cout << "1.infarmatsiyani kirgizish\n";
	cout << "2.hisobatni qayta ishlash\n";
	cout << "\n buyruqni tanlang:";
	cin >> choice;
	return choice;
}
void enter()
{
	int i;
	char temp[80];
	for (i = 0; i < 2; i++) {
		cout << "familiyangizni kiriting";
		cin >> name[i];
		cout << "telefon raqamingizni kiriting:";
		cin >> phone[i];
		cout << "nechi soat oqigansiz:";
		cin >> hours[i];
		cout << "oklad kiriting";
		cin >> wage[i];
	}
}
void report()
{
	int i;
	for (i = 0; i < 2; i++) {
		cout << name[i] << ' ' << phone[i] << '\n';
		cout << "haftadagi oqigan haqqi" << wage[i] * hours[i];
		cout << '\n';
	}
}