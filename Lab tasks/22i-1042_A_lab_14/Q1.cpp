#include<iostream>
using namespace std;

int sumftn(int a);

int main()
{
	int num,sum;
	cout<<"\nEnter the number:";
	cin>>num;
	sum=sumftn(num);
	cout<<"\nThe sum ="<<sum;
	
	return 0;
}
int sumftn(int a)
{

	int sum=0;
	if(a==0)
	{
		return 0;
		
	}	
	sum=a+sumftn(a-1);
		
        
	return sum;
	
}
