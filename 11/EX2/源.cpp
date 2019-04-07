
#include<iostream>
#include"HugeInt.h"
using namespace std;

int main() {
	HugeInt n1(7654321);
	HugeInt n1(7891234);
	HugeInt n1("99999999999999999999999999");
	HugeInt n1("1");
	HugeInt result;

	cout << "n1 is " << n1 << "\nn2 is " << n2
		<< "\nn3 is " << n3 << "\nn4 is " << n4
		<< "\nresult is " << result << "\n\n";

	if (n1 == n2)
		cout << "n1 is equal to n2" << endl;
	if (n1 != n2)
		cout << "n1 is not equal to n2" << endl;
	if (n1 < n2)
		cout << "n1 is less than to n2" << endl;
	if (n1 <= n2)
		cout << "n1 is less than or equal to n2" << endl;
	if (n1 > n2)
		cout << "n1 is greater than n2" << endl;
	if (n1 >= n2)
		cout << "n1 is greater than or equal to n2" << endl;

	result = n1 + n2;
	cout << n1 << '+' << n2 << '=' << result << "\n\n";
	cout << n3 << '+' << n4 << '\n=' << (n3 + n4) << "\n\n";

	result = n1 + 9;
	cout << n1 << '+' << 9 << '=' << result << endl;

	result = n2 + "10000";
	cout << n2 << '+' << "10000" << '=' << result << endl;

	system("pause");
}
