//initializing member variables that are classes
#include <iostream>
using namespace std;
class Date1
{
private:
	int m_year;
	int m_month;
	int m_day;

public:
    Date1(int year=2017,int month=06,int day=01) : m_year{year},m_month{month},m_day{day}//uniform initialization
    {
        cout<<m_year<<" "<<m_month<<" "<<m_day;
    }

};
class Date2
{
private:
    Date1 date;
public:
    Date2() : date(2016,06,01)
    {
    }
    
};

int main()
{
	Date2 date2;
	return 0;
}