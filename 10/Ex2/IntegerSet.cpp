#include<iostream>
#include<iomanip>
#include"IntegerSet.h"
using namespace std;

void IntegerSet::emptySet() {
	for (int n = 0; n < 101; ++n)
		set[n] = 0;
}
IntegerSet::IntegerSet(int array[], int size)
{
	emptySet();

	for (int i = 0; i < size; ++i)
		insertElement(array[i]);
}

void IntegerSet::inputSet() {
	int number;
	do {
		cout << "Enter an element (-1 to end):";
		cin >> number;

		if (validEntry(number))
			set[number] = 1;
		else if (number != -1)
			cerr << "Invalid Element\n";
	} while (number != -1);//end do...while

	cout << "Entry complete\n";
}//end function inputSet
// prints the set to the output stream
void IntegerSet::printSet()const
{
	int x = 1;
	bool empty = true;//assume set is empt
	cout << '{';
	for (int u = 0; u < 101; u++) {
		if (set[u]) {
			cout << setw(4) << u << (x % 10 == 0 ? "\n" : "");
			empty = false;
			x++;
		}//end if
	}//endfor
	if (empty)
		cout << setw(4) << "---";// display an empty set

	cout << setw(4) << "}" << '\n';
}//end function printSet

IntegerSet IntegerSet::unionOfSets(const IntegerSet &r) {
	IntegerSet temp;

	for (int n = 0; n < 101; ++n)
		if (set[n] == 1 || r.set[n] == 1)
			temp.set[n] = 1;

	return temp;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet&r) {
	IntegerSet temp;

	for (int n = 0; n < 101; ++n)
		if (set[n] == 1 && r.set[n] == 1)
			temp.set[n] = 1;

	return temp;
}
void IntegerSet::insertElement(int k)
{
	if (validEntry(k))
		set[k] = 1;
	else
		cerr << "Invalid insert attemptedI\n";
}//end function insertElement
//Write definition for deleteElement"/
void IntegerSet::deleteElement(int k) {
	if (validEntry(k))
		set[k] = 0;
	else
		cerr << "Invalid insert attemptedI\n";
}
// Write definition for isEquaITo"/
// determines if two sets are equal
bool IntegerSet::isEqualTo(const IntegerSet &r)const {
	for (int v = 0; v < 101; v++)
		if (set[v] != r.set[v])
			return false;// sets are not-equaT

	return true;
}