#include <iostream>
#include <cstdlib>
using namespace std;

void play(int m);
int main()
{
	int option;
	int magic;
	magic = rand();
	do {
		cout << "1.yangi sehrli sonni qabul qilish\n";
		cout << "2.oynash\n";
		cout << "3.programmadan chiqish\n";
		do {
			cout << "tanlovingizni kiriting";
			cin >> option;
		}
		while(option<1)
	}
	return 0;
}