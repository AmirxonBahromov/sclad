#include <iostream>
using namespace std;

int main()
{
	int magic;//
	int tahmin;//
	magic = rand();//
	cout << "tanlagan soningizni kiriting";
	cin >> tahmin;
	if (tahmin == magic) cout << "togri";
	else cout << "notogri";
	return 0;
}
