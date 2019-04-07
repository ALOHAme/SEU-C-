#include<iostream>
#include<string>
using namespace std;

class CommissionEmployee {
public:
	CommissionEmployee(const string &first, const string &last, const string &ssn,
		double s = 0.0, double r = 0.0) 
	{
		firstname = first;
		lastname = last;
		num = ssn;
		setGrossSales(s);
		setCommissionRate(r);
	}

	void setfirstname(const string &f) {
		firstname = f;
	}

	string getfirstname() const {
		return firstname;
	}

	void setlastname(const string &l) {
		lastname = l;
	}

	string getlastname() const {
		return lastname;
	}

	void setSSN(const string &ssn) {
		num = ssn;
	}

	string getSSN() const {
		return num;
	}

	void setGrossSales(double s) {
		 sales = (s>=0?s:0);
	}

	double getGrossSales() const {
		return sales;
	}

	void setCommissionRate(double r) {
		rate = ((r > 0.0&&r < 1.0)? r:0.0);
	}

	double getCommissionRate() const {
		return rate;
	}

	double earnings() const {
		return getGrossSales() * getCommissionRate();
	}

	void print() const {
		cout << "commission employee: " << firstname
			<< ' '<< lastname
			<< "\nsocial security number: " << num
			<< "\ngross sales: " << sales
			<< "\ncommission rate: " << rate;
	}

private:
	string firstname;
	string lastname;
	string num;
	double sales;
	double rate;
};


