#include<iostream>
#include<cstring>
#include"HugeInteger .h"
using namespace std;

HugeInteger::HugeInteger(int n)
{
	int s = 0,n1=n; 
	for (; n1 > 0; ++s)
		n1 /= 10;
	for (int i = s - 1; i >= 0; --i)
	{
		integer[i] = n / pow(10, i);
		n = n % static_cast<int>(pow(10, i));
	}
} 


HugeInteger::HugeInteger(const char *a)
{
	for (int i = 0, j = strlen(a); j >= i; --i) {
		integer[40-j+i] = a[i];
	}
}
HugeInteger HugeInteger::add(const HugeInteger &H) {
	HugeInteger result;
	for (int i = 39; integer[i] > 0 && H.integer[i] > 0; --i) {
		if ((integer[i] += H.integer[i]) <= 9)
			result.integer[i]=integer[i] + H.integer[i];
		else {
			++integer[i-1];
			result.integer[i] = integer[i] + H.integer[i] - 10;
		}
	}
	if ((integer[0] += H.integer[0]) > 9)
		cout << "Error";
	return result;
}
HugeInteger HugeInteger::add(int n) {
	HugeInteger result;

	int s = 0,n1=n;
	for (; n1 > 0; ++s)
		n1 /= 10;

	for (int i = 39-s+1; s > 0; --i,--s) {
		if ((integer[i] += n/10) <= 9)
			result.integer[i]=integer[i] +n/10;
		else {
			++integer[i-1];
			result.integer[i] = integer[i] + n / 10 - 10;
		}
		n %= 10;
	}
	return result;
}

HugeInteger HugeInteger::add(const char *a) {
	HugeInteger result;
	for (int j = strlen(a),i=39-j+1; j > 0; --j) {
		if ((integer[i] += a[j]) <= 9)
			result.integer[i]=integer[i] + a[j];
		else {
			++integer[i-1];
			result.integer[i] = integer[j-1] + a[j] - 10;
		}
	}
	if ((integer[0] += a[0]) > 9)
		cout << "Error";
	return result;
}

HugeInteger HugeInteger::subtract(HugeInteger &H) {
	HugeInteger result;
	if (isGreaterThan(H)) {
		for (int i = 39; integer[i] > 0 && H.integer[i] > 0; --i) {
			if (integer[i] < H.integer[i]) {
				result.integer[i] = integer[i] + 10 - H.integer[i];
				integer[i - 1]--;
			}
			else {

				result.integer[i] = integer[i] - H.integer[i];
			}
		}
	}
	else {
		for (int i = 39; integer[i] > 0 && H.integer[i] > 0; --i) {
			if (integer[i] < H.integer[i]) {
				result.integer[i] = H.integer[i] - integer[i];
			}
			else {
				result.integer[i] = H.integer[i] + 10 - integer[i];
				--integer[i - 1];
			}
		}
	}
	return result;
}


	HugeInteger HugeInteger::subtract(int n)
	{
		HugeInteger result ;
		int s = 0, n1 = n;
		for (; n1 > 0; ++s)
			n1 /= 10;

		for (int i = 39 - s + 1; s > 0; --i, --s) {
			if (integer[i] > (n / 10))
				result.integer[i] =integer[i]- (n / 10);
			else {
				--integer[i - 1];
				result.integer[i] = integer[i] +10-( n / 10 );
			}
			n %= 10;
		}
		return result;
	}

	HugeInteger HugeInteger::subtract(const char *a)
	{
		HugeInteger result;
		for (int j = strlen(a), i = 39 - j + 1; j > 0; --j) {
			if (integer[i] > a[j])
				result.integer[i]=integer[i] - a[j];
			else {
				--integer[i - 1];
				result.integer[i] = integer[i] +10- a[j];
			}
		}
		return result;
	}

	bool HugeInteger::isEqualTo(HugeInteger &H) {
	int i = 0; 

	while (integer[i] == H.integer[i] && i<40) 
	{
		++i;
	} 
	if (i == 39) 
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool HugeInteger::isNotEqualTo(HugeInteger &H) {
	if (isEqualTo(H))
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool HugeInteger::isGreaterThan(HugeInteger &H) {
	int Index1 = 0;
	int Index2 = 0;	
	while (integer[Index1] == 0&&Index1>0)
	{
		++Index1;
	} 

	while (H.integer[Index2] == 0 && Index1 > 0)
	{
		++Index2;
	}

	if (Index1 < Index2)
	{
		return true;
	}
	else if (Index1 > Index2)
	{
		return false; 
	}
	else 
	{
		int i = 0;
		while (integer[i] == H.integer[i] && i <=39 )
		{
			i++;
		} 
		
		if ( i == 39)
		{
			return true; 
		}
		else
		{
			return false; 
		} 
	} 

}
bool HugeInteger::isLessThan(HugeInteger &H) {
	if (isEqualTo(H) || isGreaterThan(H))
		return false;
	else
		return true;
}
bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger &H) {
	if (isEqualTo(H) || isGreaterThan(H))
		return true;
	else
		return false;
}
bool HugeInteger::isLessThanOrEqualTo(HugeInteger &H) {
	if (isEqualTo(H) || isLessThan(H))
		return true;
	else
		return false;
}


bool HugeInteger::isZero()
{
	int i = 0; 
	while (integer[i] == 0 && i < 40)
	{
		i++;
	} 
	if (i == 40)
	{
		return true; 
	}
	else
	{
		return false; 
	} 
}
void HugeInteger::input(const char *a) {

	for (int i = 39,j=strlen(a);j>=0 ;--i,--j) {
		integer[i] = a[39 - j];
	}
}
void HugeInteger::output() {
	cout << "n3 contains value :";
	for (int i = 39; integer[i] > 0; --i) {
		cout<<integer[i] ;
	}
	cout << endl;
}