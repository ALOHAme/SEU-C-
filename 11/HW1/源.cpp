#include<iostream>
#include"Complex.h"
using namespace std;

int main() {
	Complex com1, com2;
	cin >> com1 >> com2;
	cout << com1 << com2<<endl;
	cout << "com1 * com2 = ";
	com1 * com2;
	cout << "Is com1 = com2 ?\n";
	com1 == com2;

	system("pause");
	return 0;
}
