
#ifndef STRING_H
#define STRING_H
#include<iostream>
using namespace std;
#include<cstring>
#include<cassert>
class String {
	friend ostream &operator<<(ostream &output, const String & s);
public:
	String(const char *const = "");
	String(const String&);
		~String();
	const String &operator=(const String&);
	String operator+(const String&);
		
private:
	char *sPtr;
	int length;
};
#endif