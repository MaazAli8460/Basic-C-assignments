#include<iostream>
using namespace std;
int main()
{
	int num;
	bool flag=true;
	cout<<"\nEnter the number:";
	cin>>num;
	
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
		flag=false;
		}
	}
	
	if(flag==false)
	cout<<"\nIts not prime number:";
	else
	cout<<"\nIts prime.";
	
	
	
	
return 0;	
}
