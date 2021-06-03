#include <iostream>
using namespace std;

int main()
{
	char need;
	cout << "Symbol: ";
	cin >> need;
	string inp;

	cout << "Sring: ";
	cin >> inp;
	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] == need) {
			cout << "Symbol num: " << i;
			return 0;
		}
	}
	cout << "No symbol";
	return 0;
}