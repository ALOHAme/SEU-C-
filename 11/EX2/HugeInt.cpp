#include "HugeInt.h"
#include<iostream>

ostream & operator<<(ostream & output, const HugeInt & h)
{
	int first;
	for (int i = 0; i < 30; ++i) {
		h.integer[i] != 0;
		first = i;
	}
	for (; first >= 0; --first)
		output << h.integer[first];
	return output;
}

HugeInt::HugeInt(long n)
{
	for (int i = 0; i < 40; i++) {
		integer[i] = n % 10;
		n /= 10;
}

HugeInt::HugeInt(const char *c)
	{
		for (int i = 0, j = strlen(a); j >= i; --i) {
			integer[40 - j + i] = c[i];
		}
	}

	HugeInt HugeInt::operator+(const HugeInt &H) const
	{
		HugeInteger result;
		for (int i = 39; i>=0; --i) {
			if ((integer[i] + H.integer[i]) <= 9)
				result.integer[i] = integer[i] + H.integer[i];
			else {
				++integer[i - 1];
				result.integer[i] = integer[i] + H.integer[i] - 10;
			}
		}
		if ((integer[0] + H.integer[0]) > 9)
			cout << "Error";
		return result;
	}

	HugeInt HugeInt::operator+(int n) const
	{
		HugeInteger result;

		int s = 0, n1 = n;
		for (; n1 > 0; ++s)
			n1 /= 10;

		for (int i = 39 - s + 1; s > 0; --i, --s) {
			if ((integer[i] += n / 10) <= 9)
				result.integer[i] = integer[i] + n / 10;
			else {
				++integer[i - 1];
				result.integer[i] = integer[i] + n / 10 - 10;
			}
			n %= 10;
		}
		return result;
	}

	HugeInt HugeInt::operator+(const char *a) const
	{
		HugeInteger result;
		for (int j = strlen(a), i = 0; j >=i; ++i) {//i将a【】的下标遍历
			if ((integer[40-j+i] += a[i]) <= 9)
				result.integer[40-j+i] = integer[40-j+i] + a[i];
			else {
				++integer[40 - j + i+1];
				result.integer[40 - j + i] = integer[40 - j + i] + a[i] - 10;
			}
		}
		if ((integer[0] += a[0]) > 9)
			cout << "Error";
		return result;
	}

	bool HugeInt::operator>(const HugeInt &H) const
	{
		int Index1 = 0;
		int Index2 = 0;
		while (integer[Index1] == 0 && Index1 > 0)
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
			int i = Index1;
			while (integer[i] > H.integer[i] && i <= 39)
			{
				i++;
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

	bool HugeInt::operator<(const HugeInt &H) const
	{
		int Index1 = 0;
		int Index2 = 0;
		while (integer[Index1] == 0 && Index1 > 0)
		{
			++Index1;
		}

		while (H.integer[Index2] == 0 && Index1 > 0)
		{
			++Index2;
		}

		if (Index1 < Index2)
		{
			return false;
		}
		else if (Index1 > Index2)
		{
			return true;
		}
		else
		{
			int i = Index1;
			while (integer[i] >= H.integer[i] && i <= 39)
			{
				i++;
			}

			if (i == 39)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	bool HugeInt::operator<=(const HugeInt &H) const
	{
		//判断是否等于
		int i = 0;

		while (integer[i] == H.integer[i] && i < 40)
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

		//判断是否小于
		int Index1 = 0;
		int Index2 = 0;
		while (integer[Index1] == 0 && Index1 > 0)
		{
			++Index1;
		}

		while (H.integer[Index2] == 0 && Index1 > 0)
		{
			++Index2;
		}

		if (Index1 < Index2)
		{
			return false;
		}
		else if (Index1 > Index2)
		{
			return true;
		}
		else
		{
			int i = Index1;
			while (integer[i] >= H.integer[i] && i <= 39)
			{
				i++;
			}

			if (i == 39)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}

	bool HugeInt::operator>=(const HugeInt &H) const
	{
		//判断是否等于
		int i = 0;

		while (integer[i] == H.integer[i] && i < 40)
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

		//判断是否大于
		int Index1 = 0;
		int Index2 = 0;
		while (integer[Index1] == 0 && Index1 > 0)
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
			int i = Index1;
			while (integer[i] > H.integer[i] && i <= 39)
			{
				i++;
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

	bool HugeInt::operator==(const HugeInt &H) const
	{
		int i = 0;

		while (integer[i] == H.integer[i] && i < 40)
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

	bool HugeInt::operator!=(const HugeInt &H) const
	{
		int i = 0;

		while (integer[i] != H.integer[i] && i < 40)
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

	int HugeInt::getLength() const
	{
		int i = 0;
		for (; i <= 39 && integer[i] == 0; ++i)
			;
		return 40 - i;
	}
