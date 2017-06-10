#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		string m_name;
		int m_age;
		Person(string name="",int age=0)
			:m_name(name),m_age(age)
		{
		}
		string getName()
		{
			return m_name;
		}
		int getAge()
		{
			return m_age;
		}
};

class Player : public Person
{
	public:
		double m_battingAverage;
		int m_homeRuns;
		Player(double battingAverage = 0.0,int homeRuns = 0)
			:m_battingAverage(battingAverage),m_homeRuns(homeRuns)
		{
		}
		friend ostream& operator<<(ostream &out,const Person &p);
};

ostream& operator<<(ostream &out,const Player &p)
{
out<<"name = "<<p.m_name<<"age = "<<p.m_age<<" batting average = "<<p.m_battingAverage<<" home runs = "<<p.m_homeRuns;
return out;
}
int main()
{
Player chaitu;
chaitu.m_name = "Chaitanya";
chaitu.m_age = 24;
chaitu.m_battingAverage = 50.0;
chaitu.m_homeRuns = 15;
cout<<chaitu;
return 0;
}