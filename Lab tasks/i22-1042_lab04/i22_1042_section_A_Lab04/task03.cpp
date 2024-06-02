#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int radius,height;
	float pi=3.1415;
	float perimeter,lateralsurface,volume;
	cout<<"\n Enter radius:";
	cin>>radius;
	cout<<"\n Enter height:";
	cin>>height;
	perimeter=2*(pi*radius);
	cout<<"\n Perimeter="<<perimeter;
	lateralsurface=2*(pi*radius*height);
	cout<<"\n Lateral surface="<<lateralsurface;
	volume=pi*(radius*radius)*height;
	cout<<"\n Volume="<<volume;
	
	
	
	
	return 0;
	}
