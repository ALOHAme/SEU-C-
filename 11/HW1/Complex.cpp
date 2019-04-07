#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(double real, double img) {
	setReal(real);
	setImg(img);
}

void Complex::setReal(double r) {
	Real = r;
}
void Complex::setImg(double i) {
	Img = i;
}
double Complex::getReal() {
	return Real;
}
double Complex::getImg() {
	return Img;
}

Complex Complex::operator*(Complex a3)
{
	Complex c0;
	c0.Real = Real * a3.Real - Img * a3.Img;
	c0.Img = Real * a3.Img + Img * a3.Real;
	return c0;
}

bool Complex::operator==(Complex a4)
{
	if (Real==a4.Real&&Img==a4.Img)
	return true;
	else return false;
}

bool Complex::operator!=(Complex a5)
{
	if (Real == a5.Real||Img == a5.Img)
		return true;
	else return false;
}

ostream & operator<<(ostream &output, Complex &a1)
{
	output <<'('<< a1.getReal();
	if (a1.getImg() > 0) output << '+' << a1.getImg() << ')\n';
	else output<< a1.getImg() << ')\n';
	return output;
}

istream & operator>>(istream &input, Complex &a2)
{
	input >> a2.Real;
	input >> a2.Img;
	return input;
}
