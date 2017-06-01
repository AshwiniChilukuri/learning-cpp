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
    Date1(int year,int month,int day) : m_year{year},m_month{month},m_day{day}//uniform initialization
    {
        cout<<"yesterday= "<<m_year<<" "<<m_month<<" "<<m_day;
    }

};
class Date2
{
private:
    Date1 date;
    int m_year;
	int m_month;
	int m_day;
   
    
public:
    Date2(int year=2017,int month=06,int day=01) : date{year,month,day-1},m_year{year},m_month{month},m_day{day}
    {
       cout<<endl<<"today= "<<m_year<<" "<<m_month<<" "<<m_day; 
    }
    
};

int main()
{
	Date2 date2(2016,06,03);
	return 0;
}