#include<iostream>
#include"Complex.h"
using namespace std;

int main() {
	Complex com1(1, 7), com2(9, 2);
	com1.Printing(); cout << '+'; com2.Printing(); cout << '=('; com1.Adding(com2); cout << ')';
	com1.Printing(); cout << '-'; com2.Printing(); cout << '=('; com1.Subtracting(com2); cout << ')';
	system("pause");
	return 0;
}
