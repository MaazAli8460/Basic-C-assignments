#include<iostream>
void c_to_k(double x);
void k_to_f(double y);
void f_to_c(double z);
using namespace std;
int main()
{
	int ch;
	cout<<"\nEnter your temp conversion       :";
	cout<<"\nEnter 1 for celcius to kelvin    :";
	cout<<"\nEnter 2 for kelvin to farhenheit :";
	cout<<"\nEnter 3 for farhenhiet to celcuis:\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<"\nEnter temperature in celcius:";
		double c;
		cin>>c;
		c_to_k(c);
		break;
		
	case 2:
		cout<<"\nEnter temperature in kelvin:";
		double k;
		cin>>k;
		k_to_f(k);
		break;
		
	case 3:
		cout<<"\nEnter temperature in ferhenhiet:";
		double f;
		cin>>f;
		f_to_c(f);
		break;
	
	
	default:
	cout<<"\n Wrong entry...";
	
	}
	
return 0;

}

void c_to_k(double x)
{
	double fo;
	fo=x+273.15;
	cout<<"Kelvin:"<<fo;
}


void k_to_f(double y)
{
	double fa;
	fa=1.8*(y-273)+32;
	cout<<"Farenhiet:"<<fa;

}
void f_to_c(double z)
{
	double fm;
	fm=(5.0/9)*z -32;
	cout<<"Celcius:"<<fm;

}









