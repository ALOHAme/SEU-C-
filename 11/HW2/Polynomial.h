#pragma once
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
class Polynomial {
public:
	Polynomial();
	~Polynomial();
	Polynomial setPolynomial();
	void getPolynomial();
	Polynomial operator+(Polynomial &);
	Polynomial operator-(Polynomial &);
	Polynomial operator=(Polynomial &);
	Polynomial operator+=(Polynomial &);
	Polynomial operator-=(Polynomial &);

private:
	int term[30];//������������������exponent)
};
#endif