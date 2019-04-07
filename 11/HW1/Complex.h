#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
	friend ostream &operator<<( ostream &, Complex &);
	friend istream &operator>>(istream &,  Complex &);
public:
	Complex(double = 0, double = 0);
	void setReal(double);
	void setImg(double);
	double getReal();
	double getImg();
	Complex operator *(Complex);
	bool operator ==(Complex);
	bool operator !=(Complex);
private:
	double Real;
	double Img;
};
#endif

