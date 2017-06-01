//classes
//printing date using constructors
#include <iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;

public:
    Date()
    {
        year = 2017;
        month = 06;
        day = 01;
    }
    void print()
	{
		cout<<year<<" "<<month<<" "<<day;
	}

};

int main()
{
	Date date;
	date.print();
	return 0;
}