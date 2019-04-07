#include<iostream>
#include"CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee {
public:
	BasePlusCommissionEmployee(const string &f, const string &l, const string &ssn,
		double s = 0.0, double r = 0.0, double basesalary = 0.0)
		: BPCE(f, l, ssn, s, r)
	{
		BPCE.setfirstname(f);
		BPCE.setlastname(l);
		BPCE.setSSN(ssn);
		BPCE.setGrossSales(s);
		BPCE.setCommissionRate(r);
		setBaseSalary(basesalary);
	}

	void setBaseSalary(double basesalary) {
		if (basesalary >= 0.0) base = basesalary;
		else throw invalid_argument("salary must be >= 0.0");
	}

	double getBaseSalary() const {
		return base;
	}

	double earnings() const {
		return base + BPCE.earnings();
	}

	void print() const {
		BPCE.CommissionEmployee::print();
		cout << "\nbase salary: " << base;
	}

private:
	CommissionEmployee BPCE;
	double base;
};