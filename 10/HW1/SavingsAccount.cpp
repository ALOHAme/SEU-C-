#include "SavingsAccount.h"
#include<iostream>
using namespace std;
SavingsAccount::SavingsAccount(double ba)
{
	savingsBalance = ba;
}
void SavingsAccount::calculateMonthlyInterest()
{
	double rate= annualInterestRate/12;
	savingsBalance = savingsBalance * (1 + rate);
	cout << "the latest savingsBalance is:" << savingsBalance << endl;
}

void SavingsAccount::modifyInterestRate(double a)
{
	annualInterestRate = a;
}
