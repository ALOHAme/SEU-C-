
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h) {
	if (h >= 0 && h < 24) {
		hour = h;
	} // end if
	else
		throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m) {
	if (m >= 0 && m < 60)
		minute = m;
	else
		throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s) {
	if (s >= 0 && s < 60)
		second = s;
	else
		throw invalid_argument("second must be 0-59");
}

int Time::getHour() {
	return hour;
}

int Time::getMinute() {
	return minute;
}

int Time::getSecond() {
	return second;
}

void Time::printUniversal() {
	cout << setfill('0') << setw(2) << getHour() << ':'
		<< setw(2) << getMinute() << ':' << setw(2) << getSecond();
}

void Time::printStandard() {
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ':' << setfill('0') << setw(2) << getMinute()
		<< ':' << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}

void trick(Time &t) {
	if (t.second == 59) {
		if (t.minute == 59) {
			if (t.hour == 23) {
				t.hour = t.minute =t.second = 0;
			}
			else {
				t.hour++;
				t.minute = 0;
				t.second = 0;
			}
		}
		else {
			t.minute++;
			t.second = 0;
		}
	}
	else {
		t.second++;
	}
}