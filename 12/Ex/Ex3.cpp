#include<iostream>
using namespace std;

class MyBase3{
	int x;
	fun1(){cout<<"MyBase3---fun1()"<<endl;}
protected:
	int y;
	fun2(){cout<<"MyBase3---fun2()"<<endl;}
public:
	int z;
	MyBase(int a,int b,int c){x=a;y=b;z=c;}
	int getX(){cout<<"MyBase3---x:"<<endl;return x;}
	int getY(){cout<<"MyBase3---y:"<<endl;return y;}
	int getZ(){cout<<"MyBase3---z:"<<endl;return z;}
	fun3(){cout<<"MyBase3---fun3()"<<endl;}
};

class Myderived1:public MyBase3{
	int p;
public:
	Myderived1(int a) :p(a);
	int getP(){cout<<"MyDerived---p:"<<endl;return p;}
	int disply(){
		cout<<p<<"  "<<x<<"  "<<y<<"  "<<z<<"  "<<endl
			<<fun1()<<endl<<fun2()<<endl<<fun3()<<endl;
	}
};
int main() 
{ 
	MyDerived1 a(3);   
	a.disply();   
	cout << a.x << "  " << a.p << "  " << a.y << "  " << a.z << endl;   
	cout << a.getX() << "  " << a.getP() << "  " << a.getY() << "  " << a.getZ() << endl; 
}
class MyDerived2:private MyBase3{
	int p;
public:
	MyDerived2(int a) :p(a);
	int getP(){cout<<"MyDerived---p:"<<endl;return p;}
	int disply(){
		cout<<p<<"  "<<x<<"  "<<y<<"  "<<z<<"  "<<endl
			<<fun1()<<endl<<fun2()<<endl<<fun3()<<endl;
	}
};

class MyDerived21:public MyDerived3{
	int p;
public:
	MyDerived21(int a) :p(a);
	int getP(){cout<<"MyDerived21---p:"<<endl;return p;}
	int disply1(){
		cout<<p<<"  "<<x<<"  "<<y<<"  "<<z<<"  "<<endl;
	}
};
int main() 
{ 
	MyDerived2 a(3); 
	MyDerived21 b(6);   
	a.disply();   
	cout << a.x << "  " << a.p << "  " << a.y << "  " << a.z << endl;   
	cout << a.getX() << "  " << a.getP() << "  " << a.getY() << "  " << a.getZ() << endl; 
	b.disply1(); } 
class MyDerived3:protected MyBase3{
	int p;
public:
	MyDerived3(int a) :p(a);
	int getP(){cout<<"MyDerived---p:"<<endl;return p;}
	int disply()
	{
		cout<<p<<" "<<x<<" "<<y<<" "<<z<<" "<<endl
			<<fun1()<<endl<<fun2()<<endl<<fun3()<<endl;
	}
};

class MyDerived31:public MyDerived3{
	int p;
public:
	MyDerived31(int a) :p(a);
	int getP(){cout<<"MyDerived31---p:"<<endl;return p;}
	int disply1(){
		cout<<p<<" "<<x<<" "<<y<<" "<<z<<" "<<endl;
	}
};

int main()
{	
	MyDerived3 a(3);
	MyDerived31 b(6);
	a.disply();
	cout<<a.x<<" "<<a.p<<" "<<a.y<<" "<<a.z<<endl;
	cout<<a.getX()<<" "<<a.getP()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
	b3.disply1();
}

class MyBase { 
public:  
	void f1() { cout << "¡­MyBase f1---- - !¡± << endl; }
	void f2() { cout << "¡­MyBase f2---- - !¡± << endl; }
}; 
class MyDerived : public MyBase { 
public:   
	void f2() { cout << "¡­MyDerived f2---- - !¡± << endl; } 
	void f22() { MyBase::f2(); cout << "¡­MyDerived f2---- - !¡± << endl; }  
	void f3() { cout << "¡­MyDerived f3---- - !¡± << endl; }
};
int main() 
{
	MyDerived a;    
	a.f1(); 
	a.f2(); 
	a.f3(); 
	a.f22(); }
