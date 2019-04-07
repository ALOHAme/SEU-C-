#include "String.h"
#include<cstring>
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
ostream & operator<<(ostream & output, const String & s)
{
	output << s.sPtr;
	return output;
}

String::String(const char * const s)
{
	 sPtr = new char[strlen(s) + 1]; 
	
	   if (s != 0) 
       strcpy(sPtr, s); 
	 else 
	   sPtr[0] = '\0'; 

}

String::String(const String &s)
{
	sPtr = new char[s.length + 1];

	if (s.sPtr != 0)
		strcpy(sPtr, s.sPtr);
	else
		sPtr[0] = '\0';
}

String::~String()
{
	if (*sPtr != 0)
		delete [] sPtr;
}

const String & String::operator=(const String &s)
{
	sPtr = new char[s.length + 1];

	if (s.sPtr != 0)
		strcpy(sPtr, s.sPtr);
	else
		sPtr[0] = '\0';

}

String String::operator+(const String &s)
{
	String string0;
	string0.length = strlen(sPtr) + s.length;
	string0 = new char[length+1];

	strcat(string0.sPtr, sPtr);
	strcat(string0.sPtr, s.sPtr);
	return string0;
}
