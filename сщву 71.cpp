#include <iostream>
using namespace std;
struct c1 {
	int get_i();
	void put_i(int j);
private:
	int i;
};
	int c1::get_i()
		{
		return i;
		}
	void c1::put_i(int j)
	{
		i = j;
	
	}
	int main()
	{
	
			c1 s;
		s.put_i(10);
		cout << s.get_i();
		return 0;
	}
	