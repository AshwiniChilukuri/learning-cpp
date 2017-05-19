#include <iostream>
#include <string>
using namespace std;
int main()
{
string strr;
char c;
int count=0;
cout<<"Enter a string"<<std::endl;
cin>>strr;
cout<<"Enter the char you want to count";
cin>>c;
for(int i=0;i<strr.length() ; i++)
	{
	    if(strr[i] == c || strr[i] == c+32 || strr[i] == c-32) count+=1;
	}
cout<<"no. of " <<c<<" = "<<count;
return 0;
}
