#include <string>
#include <iostream>
using namespace std;
class Ball
{
private:
	string m_color= "black";;
	double m_radius= 10.0;;

public:
    Ball()
    {
    }
// Constructor with only color parameter (radius will use default value)
	Ball(const string color) : m_color(color)
	{
	}
	Ball(double radius) : m_radius(radius)
	{
	}
// Constructor with only radius parameter (color will use default value)
// Constructor with both color and radius parameters
	Ball(const string color, double radius ) : m_color(color), m_radius(radius)
	{
	}

	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
	}
};

int main()
{
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();
	
	Ball twenty(20.0);
	twenty.print();
	
	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();
	
	return 0;
}