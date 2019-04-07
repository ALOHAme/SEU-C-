#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main() {

	Time time0(23, 59, 57);
	time0.printStandard();
	cout << endl;
	for (int i = 0; i < 60; i++) {
		trick(time0);
		time0.printStandard();
		cout << endl;
	}

	system("pause");

	return 0;
}