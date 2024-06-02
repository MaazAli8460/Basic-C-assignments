/*
  Maaz Ali
  22i-1042
  Assignment#04
*/

#include<iostream>
int euclideanGCD(int x, int y);
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"\nEnter the second number:";
	cin>>b;
	c= euclideanGCD(a,b);
	
	cout<<"\nThe euclidean GCD="<<c;


return 0;
}

int euclideanGCD(int x, int y)
{
	int temp;
	
	if(y>x)
	{
		temp=x;
		x=y;
		y=temp;
	}
	temp=0;
	for(int i=1;y!=0;i++)
	{
		temp=x;
		x=y;
		y=temp%y;
	}


	return x;
}
