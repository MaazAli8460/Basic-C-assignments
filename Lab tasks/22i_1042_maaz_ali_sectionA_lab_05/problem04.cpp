#include<iostream>
using namespace std;
int main()
{
	int sec;
	cout<<"\nEnter time in seconds:";
	cin>>sec;
	cout<<"\nyears:"<<sec/31536000;
	sec=sec%31536000;
	cout<<"\nmonths:"<<sec/(30*24*60*60);
	sec=sec%(30*24*60*60);
	cout<<"\ndays:"<<sec/86400;
	sec=sec%86400;
	cout<<"\nminutes:"<<sec/3600;
	sec=sec%3600;
	cout<<"\nseconds:"<<sec/60;
	
	
	
	return 0;
	}
	
