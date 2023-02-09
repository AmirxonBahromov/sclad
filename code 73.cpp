#include <iostream>
using namespace std;
int main()
{
	int magic;
	int keyingi;
	magic = rand();
	cout << "oylagan sonni yozing";
	cin >> keyingi;
	if (keyingi == magic)
		cout << "togri";
	else
		cout << "notogri";
	return 0;
}
