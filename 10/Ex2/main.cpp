#include<iostream>
#include"IntegerSet.h"//IntegerSet class definition
using namespace std;

int main() {
	IntegerSet a;
	IntegerSet b;
	IntegerSet c;
	IntegerSet d;

	cout << "Enter setA:\n";
	a.inputSet();
	cout << "\nEnter set B:\n";
	b.inputSet();
	/*Write call to umionOfSets for object a,passing
	b as argument and assigning the result to c */
	c = a.unionOfSets(b);
	/*write call to intersectionOfSets for object a,
	passing b as argument and assigning the result to d*/
	d = a.intersectionOfSets(b);
	cout << "\nUnion of A and Bis:\n";
	c.printSet();
	cout << "Intersection of A and B is:\n";
	d.printSet();

	if (a.isEqualTo(b))
		cout << "Set A is equal to setB\n";
	else
		cout << "Set A is not equal to set B\n";

	cout << "\nInserting 77 into set A...\n";
	a.insertElement(77);
	a.printSet();

	cout << "\nInserting 77 into set A...\n";
	a.deleteElement(77);
	a.printSet();

	const int arraySize = 10;
	int intArray[arraySize] = { 25,67,2,9,99,105,45,-5,100,1 };
	IntegerSet e(intArray, arraySize);

	cout << "\nSet e is:\n";
	e.printSet();

	cout << endl;
	system("pause");
}
