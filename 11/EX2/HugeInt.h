#pragma once
#ifndef HUGEINT_H
#define HUGEINT_H

#include<iostream>
using namespace std;

class HugeInt
{
	friend ostream &operator<<(ostream &, const HugeInt &);
public:
	HugeInt(long = 0);
	HugeInt(const char*);

	HugeInt operator+(const HugeInt &)const;

	HugeInt operator+(int)const;

	HugeInt operator+(const char*)const;

	bool operator>(const HugeInt &)const;
	bool operator<(const HugeInt &)const;
	bool operator<=(const HugeInt &)const;
	bool operator>=(const HugeInt &)const;
	bool operator==(const HugeInt &)const;
	bool operator!=(const HugeInt &)const;
	int getLength()const;

private:
	short integer[30];
};
#endif
