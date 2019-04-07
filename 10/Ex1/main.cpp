#include<iostream>
#include"SimpleCalculator.h"
using namespace std;

int main(){
	double a=10.0,b=20.0;
	SimpleCalculator sc;
	cout<<"The value of a is"<<a<<'\n';
	cout<<"The value of b is"<<b<<"\n\n";

/*write a line that adds a and b through your SimpTeCalculator
object: assign the result to a vaiable named addition"*/
	double addition=sc.add(a,b);
cout<<"Adding a and b yields"<<addition <<"\n";

double subtraction=sc.subtract( a,b);
cout<<"Subtracting b from a yields"<< subtraction <<"\n";

double multiplication=sc.multiply( a,b);
cout<<"Multiplying a by b yields"<<multiplication<<"\n";
/*write a line that divides a and b through the
SimpleCalculator object: assign the result to a
variable named division*/
double division=sc.divide(a,b);
cout<<"Dividing a by b yields"<< division << endl;

	system("pause");
	return 0;
}
