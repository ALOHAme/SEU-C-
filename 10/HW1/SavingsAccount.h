#pragma once
class SavingsAccount {
public:
	SavingsAccount(double);
	void calculateMonthlyInterest();
	 static void modifyInterestRate(double);
private:
	double savingsBalance;
	static double annualInterestRate;
};