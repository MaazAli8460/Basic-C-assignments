#include<iostream>

using namespace std;
int main()
{
	cout<<"\n name: MAAZ Ali Roll no: 22i-1042"<<endl;
	int year;
	cout<<"\n Enter a year:";
	cin>>year;
	
	if(year<1752)
	cout<<"\n There were no leap year before 1752";
	
	else if(year%400==0)
	cout<<"\n It is a leap year";
	
	else if(year%100==0)
	cout<<"\nIt is not a leap year";
	
	else if(year%4==0)
	cout<<"\nIt is a leap year.";
	
	else
	cout<<"\n Enter a valid year.";
	
	
	
	return 0;
	
}
	
