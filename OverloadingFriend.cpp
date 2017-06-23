//operator(<< & +) overloading
#include <iostream>
using namespace std;
class Cents
{
    int m_cents;
    public:
    Cents(int value):m_cents(value)
    {
    }
    friend ostream& operator<<(ostream& out,const Cents& c);
    friend Cents operator+(const Cents& c1,const Cents& c2); 
};
ostream& operator<<(ostream& out,const Cents& c)
{
    out<<"cents = "<<c.m_cents;
    return out;
}
Cents operator+(const Cents& c1,const Cents& c2)
{
    return Cents(c1.m_cents+c2.m_cents);
}

int main()
{
  Cents c1(10);
  Cents c2(5);
  cout<<(c1+c2);
}