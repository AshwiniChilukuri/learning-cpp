#include <iostream>
using namespace std;
void fibonocii(int a, int b,int n);
int main()
{
	int n;
	cout<<"enter length of fibonocii series "<<endl;  
	cin>>n;
	cout<<"fibonocii -" <<0<<" "<<1<<" ";
	fibonocii(0,1,n);
	return 0;
}

void fibonocii(int a, int b,int n)
{
	int first,second;
	second = a+b;
	first = b;
	cout <<second<<" ";
	if(n>3)
	fibonocii(first,second,n-1); 	
}