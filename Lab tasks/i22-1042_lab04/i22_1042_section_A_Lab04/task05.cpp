#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	float fuel,miledriven,mpg;
	cout<<"\n Enter the total fuel:";
	cin>>fuel;
	cout<<"\n Enter total distance traveled:";
	cin>>miledriven;
	mpg=miledriven/fuel;
	cout<<"\n miles per gallon of fuel="<<mpg;
	return 0;
	}
