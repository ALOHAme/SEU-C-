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
Complex Complex::Adding(Complex c2) {
	Complex cadd = (Real + c2.getReal, Img + c2.getImg);
	return cadd;
}
Complex Complex::Subtracting(Complex c2) {
	Complex csub = (Real + c2.getReal, Img + c2.getImg);
	return csub;
}
void Complex::Printing() {
	cout <<'('<<Real << "," << Img<< ")" << endl;
}
