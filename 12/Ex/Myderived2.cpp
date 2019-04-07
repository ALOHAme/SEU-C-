#include<iostream>
#include"MyBase2.h"
using namespace std;

class Myderived1 : public MyBase2 {
MyBase1 a1;
public:
Myderived1(){ cout << "¡­First layer derived Object is created!"<< endl; }
~Myderived1(){ cout << "¡­First layer derived Object is Destroyed!"<< endl; }
};
class Myderived11 : public Myderived1 {
public:
Myderived11(){ cout << "¡­Second layer derived Object is created!"<< endl; }
~Myderived11(){ cout << "¡­Second layer derived Object is destroyed!"<< endl; }
};
int main()
{
MyBase2 a;
Myderived1 b;
Myderived11 c;
}