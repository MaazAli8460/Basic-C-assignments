#include<iostream>
using namespace std;
int main()
{
	int num,a=2,b=1,c;
	cout<<"\nEnter the number:";
	cin>>num;
	cout<<a<<","<<b<<",";
	for(int i=3;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<",";
	}
	
return 0;	
}
