//classes
//printing date using uniform initialization
#include <iostream>
using namespace std;
class Date
{
private:
	const int m_year;
	int m_month;
	int m_day;

public:
    Date(int year=2017,int month=06,int day=01) : m_year{year},m_month{month},m_day{day}//uniform initialization
    {
    }
    void print()
	{
		cout<<m_year<<" "<<m_month<<" "<<m_day;
	}

};

int main()
{
	Date date(2016,07);
	date.print();
	return 0;
}