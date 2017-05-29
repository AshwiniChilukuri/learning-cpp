//classes
//printing date
#include <iostream>
using namespace std;
class Date
{
public:
	int year;
	int month;
	int day;
	void print()
	{
		cout<<year<<" "<<month<<" "<<day;
	}

};

int main()
{
	Date date = {2017,05,29};
	date.print();	
	return 0;
}