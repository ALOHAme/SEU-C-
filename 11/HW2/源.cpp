#include<iostream>
#include"Polynomial.h"
using namespace std;

int main() {
	Polynomial p1;
	Polynomial p2;
	cout << "������������ʽ��ϵ������������0��29�����С�����00�Խ�������һ������ʽ��\n";

    p1.setPolynomial(); 
	p2.setPolynomial();
	
	cout << "p1+p2="; 
	 (p1 + p2).getPolynomial(); cout<< endl;
	 cout << "p1-p2=";
	 (p1 - p2).getPolynomial(); cout << endl;
	p1 += p2;
	cout << "p1+=p2Ϊ";
	p1.getPolynomial();cout << endl;
	p1 -= p2;
	cout << "p1-=p2Ϊ"; p1.getPolynomial();cout << endl;
	system("pause");
	return 0;
}