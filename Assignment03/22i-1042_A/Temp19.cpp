/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
using namespace std;
int main()
{
	int num,sum,mod,x=10,count=1;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num==0)
	{
		cout<<"\nWrong Input....";
		cout<<"\nEnter the number:";
		cin>>num;
	}
	
	while(num!=0)
	{
		mod=num%10;
		num/=x;
		if(count%2!=0)
		sum+=mod;
		else
		sum-=mod;
		
		mod=0;
		count++;
	
	}

	if(sum%11==0)
	cout<<"\nIts Divisible.";
	else
	cout<<"Not Divisible.";

	return 0;
	
}
