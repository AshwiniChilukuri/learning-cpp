/*
Write a class named RGBA that contains 4 member variables of type
std::uint8_t named m_red, m_green, m_blue, and m_alpha. 
Assign default values of 0 to m_red, m_green, and m_blue, and 255 to m_alpha. 
Create a constructor that uses a member initializer list that allows the user 
to initialize values for m_red, m_blue, m_green, and optionally m_alpha. 
Include a print() function that outputs the value of the member variables.
*/

#include <iostream>

#include <cstdint>

using namespace std;

class RGBA

{

    private:

        uint8_t m_red, m_green, m_blue, m_alpha;

    public:

        RGBA(uint8_t red=0,uint8_t green=0,uint8_t blue=0,uint8_t alpha=255) : m_red{red}, m_green{green}, m_blue{blue}, m_alpha{alpha}

        {

        }

        void print()

        {

            cout<<"red= "<<static_cast<int>(m_red)<<" green = "<<static_cast<int>(m_green)<<" blue="<<static_cast<int>(m_blue)<<" alpha="<<static_cast<int>(m_alpha);

        }

};


int main()

{

    RGBA teal(0,127,127);

    teal.print();

    return 0;

}