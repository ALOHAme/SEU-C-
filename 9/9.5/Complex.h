#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
	Complex(double = 0, double = 0);
	void setReal(double);
	void setImg(double);
	double getReal();
	double getImg();
	Complex Adding(Complex);
	Complex Subtracting(Complex);
	void Printing();

private:
	double Real;
	double Img;

};
#endif
