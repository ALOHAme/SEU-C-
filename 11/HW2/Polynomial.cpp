#include "Polynomial.h"
#include<iostream>
using namespace std;

Polynomial::Polynomial() {
	for (int i = 0; i < 30 ; ++i)
		term[i] = 0;
}
Polynomial::~Polynomial()
{
	cout << "The Polynomial has been destructed!\n";
}

Polynomial Polynomial::setPolynomial()
{
	int a;
	cin >> a;
	for (int i = 0; i < 30 && a != 00; ++i)
	{
		term[i] = a;
		cin >> a;
	}
	return *this;
}

void Polynomial::getPolynomial()
{
	cout << term[0] << "x^" << 0;
	for (int i = 1; i < 30; ++i)
		cout <<"+"<< term[i]<<"x^"<<i;
	cout << endl;
}

Polynomial Polynomial::operator-(Polynomial &P)
{
	Polynomial p4;
	for (int i = 0; i < 30; ++i)
		p4.term[i] = term[i] - P.term[i];
	return p4;
}

Polynomial Polynomial::operator=(Polynomial &P)
{
	for (int i = 0; i <= 30; ++i)
		term[i] = P.term[i];
	return *this;
}

Polynomial Polynomial::operator+=(Polynomial &P)
{
	for (int i = 0; i < 30; ++i)
		term[i] = term[i] + P.term[i];
	return *this;
}

Polynomial Polynomial::operator-=(Polynomial &P)
{
	for (int i = 0; i < 30; ++i)
		term[i] = term[i] - P.term[i];
	return *this;
}

Polynomial Polynomial::operator+(Polynomial &P)
{
	Polynomial p3;
	for (int i = 0; i < 30; ++i)
		p3.term[i] = term[i]+ P.term[i];
	return p3;
}
