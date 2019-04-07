#pragma once
#ifndef INTEGER_SET_H
#define INTEGER_SET_H
#include<vector>
using namespace std;
class IntegerSet {
public:
	// default constructor

	IntegerSet()
	{
		/* write call to emptySet*/
		emptySet();
	}
	//end IntegerSet constructor
	IntegerSet(int[], int);// constructor that takes an initial 
	IntegerSet unionOfSets(const IntegerSet&);

	//write a menber funcion prototype for intersectionOfSets/
	IntegerSet intersectionOfSets(const IntegerSet&);
	void emptySet();// set all elements of set to 0
	void inputSet();// read values from user
	void insertElement(int);
	//Write a member function prototype for deleteElement
	void deleteElement(int);
	void printSet()const;
	//Write a member function prototype for isEqualTo"/
	bool isEqualTo(const IntegerSet&)const;
private:
	vector<int> set;//range of0-100
	// determines a valid entry to the set
	int validEntry(int x)const
	{
		return (x >= 0 && x <= 100);
	}//end function validEntry
};//end class IntegerSet
#endif
