#include<iostream>
#include"SavingsAccount.h"
using namespace std;
double SavingsAccount::annualInterestRate = 0.03;
int main() {
	SavingsAccount saver1(2000);
	SavingsAccount saver2 = (3000);
	saver1.calculateMonthlyInterest();
	saver1.calculateMonthlyInterest();
	SavingsAccount::modifyInterestRate(0.04);
	saver1.calculateMonthlyInterest();
	saver1.calculateMonthlyInterest();
	system("pause");
}