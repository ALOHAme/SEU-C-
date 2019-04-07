#include<iostream>
#include<string>
using namespace std;

class Emergency
{public:
		Emergency(string time,string location,string phoneNumber,string time);
		void SetStatus();
		void SetResponseType();
		void SetResponseStatus();

private:
		string name;
		string location;
		string phoneNumber;
		string time;
		string type;
		string status;
};
