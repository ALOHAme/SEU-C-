#include<iostream>
#include<cstring>
#include"HugeInteger .h"
using namespace std;

int main() {
	HugeInteger h1(7654321), h2(7891234);
	HugeInteger h3(5);
	HugeInteger hh,n3;
	h1.add(h2);
	cout << "7654321" << '+' << "7891234" << "=";
	h1.add(h2);
	cout<< endl;

	h2.subtract(h3);
	cout << "7891234" << '-' << "5" << "=";
	h2.subtract(h3);
	cout<< endl;

	if (h1.isEqualTo(h1)) {
		cout << "7654321"  << "is equal to "<< "7654321" <<endl;
	}

		if (h1.isNotEqualTo(h2)) {
			cout << "7654321" << "is not equal to " << "7891234" << endl;
		}

			if (h2.isGreaterThan(h1)) {
				cout << "7891234" << "is greater than " << "7654321" << endl;
			}

			if (h3.isLessThan(h2)) {
				cout << "5" << "is less than " << "7891234" << endl;
			}
			if (h3.isLessThanOrEqualTo(h3)) {
				cout << "5 is less than or equalto 5" << endl;
			}
			if (hh.isGreaterThanOrEqualTo(hh) ){
				cout << "0 is greater than or equal to 0" << endl;
			}
			n3.output();
			system("pause");
			return 0;
}