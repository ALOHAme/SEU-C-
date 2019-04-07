#include<iostream>
#include"Polynomial.h"
using namespace std;

int main() {
	Polynomial p1;
	Polynomial p2;
	cout << "输入两个多项式的系数，次数按从0到29而排列。输入00以结束输入一串多项式：\n";

    p1.setPolynomial(); 
	p2.setPolynomial();
	
	cout << "p1+p2="; 
	 (p1 + p2).getPolynomial(); cout<< endl;
	 cout << "p1-p2=";
	 (p1 - p2).getPolynomial(); cout << endl;
	p1 += p2;
	cout << "p1+=p2为";
	p1.getPolynomial();cout << endl;
	p1 -= p2;
	cout << "p1-=p2为"; p1.getPolynomial();cout << endl;
	system("pause");
	return 0;
}