//structures
//printing date
#include <iostream>
using namespace std;
struct Date
{
	int year;
	int month;
	int day;
};
int main()
{
	Date date = {2017,05,29};
	cout<<date.year<<" "<<date.month<<" "<<date.day;	
	return 0;
}