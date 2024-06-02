/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
using namespace std;
int main()
{
	int a,b,count;
	float g_rateA,g_rateB;
	cout<<"\nEnter the population of town A:";
	cin>>a;
	cout<<"\nEnter the growth rate of town A:";
	cin>>g_rateA;
	cout<<"\nEnter the population of town B:";
	cin>>b;
	cout<<"\nEnter the growth rate of town B:";
	cin>>g_rateB;
	
	while(g_rateA<=0 && g_rateB<=0 && a<=0 && b<=0)
	{
		cout<<"\nWrong Input.....";
		cout<<"\nEnter the population of town A:";
		cin>>a;
		cout<<"\nEnter the growth rate of town A:";
		cin>>g_rateA;
		cout<<"\nEnter the population of town B:";
		cin>>b;
		cout<<"\nEnter the growth rate of town B:";
		cin>>g_rateB;
	
	}
	
	if(g_rateA>g_rateB)
	{
	while(a<=b)
	{
		a=a+((g_rateA/100)*a);
		b=b+((g_rateB/100)*b);
		count++;
	}
	}
	else
	cout<<"\nSince the growth rate of B is >= A so the population of A will not excede than B.";
	
	cout<<"\nIt would take "<<count<<" years for the population of A to be greater than or equal to B.";
	cout<<"\nAt that time population of A="<<a<<" And population of B="<<b;
	
	return 0;

}
