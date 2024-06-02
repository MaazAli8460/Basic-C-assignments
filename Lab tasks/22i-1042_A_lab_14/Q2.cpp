#include<iostream>
using namespace std;

int count(int x);

int main()
{

	
	int num,ones;
	
	cout<<"\nEnter the number:";
	cin>>num;
	
	ones=count(num);

	cout<<"\nThe number of ones in binary:"<<ones;

	return 0;
}
int count(int x)
{
	
	if(x>0)
	{
		if((x%2)==1)
		return 1+count(x/2);
		
		else
		return count(x/2);
	
	
	
	}
	return x;
	
}
