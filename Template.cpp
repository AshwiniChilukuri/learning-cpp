#include <iostream>
template <typename T>

T add(T& c1,T& c2)
{
    return c1+c2;
}

class Cents
{
    int m_cents;
    public:
    Cents(int value):m_cents(value)
    {
    }
    friend std::ostream& operator<<(std::ostream& out,const Cents& c);
    friend Cents operator+(Cents& c1,Cents& c2); 
};
std::ostream& operator<<(std::ostream& out,const Cents& c)
{
    out<<"cents = "<<c.m_cents;
    return out;
}
Cents operator+(Cents& c1,Cents& c2)
{
    return Cents(c1.m_cents+c2.m_cents);
}

int main()
{
  Cents c1(10);
  Cents c2(5);
  int x=5,y=5;
  std::cout<<add(c1,c2)<<std::endl<<"addition= "<<add(x,y);
}