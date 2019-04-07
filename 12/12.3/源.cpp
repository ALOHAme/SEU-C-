#include<iostream>
#include<iomanip>
#include"CommissionEmployee.h"
#include"BasePlusComissionEmployee.h"
using namespace std;

int main() {
	cout << fixed << setprecision(2);

	BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

	cout << "Employee information output by print function:\n";
	employee.print();
	system("pause");
	return 0;
}