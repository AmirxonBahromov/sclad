#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout << "mavzular:\n\n";
	cout <<"1.; for\n";
	cout << "2. if\n";
	cout << "3. switch\n\n";
	cout << "1 dan 3 gacha bolgan sonlarni kiriting(1-3):";
	cin >> choice;
	cout << "\n";
	switch (choice) {
	case 1:
		cout << "for - eng mukammal skil.\n";
		break;

	case 2:
		cout << " if bu shartli funksiya.\n";
		break;

	case 3:
		cout << "switch- kop yonalishdagi funksiya.\n";
		break;

	default:
		cout << "1 dan 3 gacha bolgan sonni kiriting\n";
	}
	return 0;
}