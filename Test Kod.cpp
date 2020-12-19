#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

	int a, b, c;
	cout << "Vedite a,b,c" << endl;
	cout << "Vedite a: ";
	cin >> a;
	cout << "Vedite b: ";
	cin >> b;
	cout << "Vedite c: ";
	cin >> c;
	int a1, b1, c1;
	a1 = a / 100;
	b1 = b / 100;
	c1 = c / 100;

	if (c1>b1>a1) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	

	return 0;

}
