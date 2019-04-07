#include<iostream>
using namespace std;

class MyBase31 {
	int a, b, c;
public:
	MyBase31(int x, int y, int z) :a(x), b(y), c(z)
	{
		cout << "¡­BaseClass31 Object is created!" << endl;
		cout << a << " " << b << " " << c << endl;
	}
	~MyBase31() { cout << "¡­BaseClass31 Object is destroyed!" << endl; }
};

class MyBase32{
	int a,b,c;
public:
	MyBase32(){
	}
	MyBase32(int x,int y,int z){
		cout<<"¡­BaseClass32 Object is created!"<<endl;
		cout<<a<<" "<<b<<" "<<  c<<endl;
		a=x,b=y,c=z;
		cout<<a<<" "<<b<<" "<<  c<<endl;
	}
	~MyBase32(){cout<<"¡­BaseClass32 Object is destroyed!"<<endl;}
};

class Myderived1:public MyBase31{
	MyBase31  a(5, 6, 7);
	int c;
public:
	Myderived1(int x):c(x),MyBase31(x,8,9)
	{
	cout<<"¡­Base Object has been created!"<<endl; 
	cout<<"¡­Member Object has been created!"<< a.x << "  " << a.y << "  " << a.z 
		<<endl;
	cout<<"¡­Derived Object is created!"<<c<<endl;
	}
};

int main()
{
	MyBase31 a(1, 2, 3);    MyBase32 b(4, 5, 6);
	Myderived1 b(88);
}
