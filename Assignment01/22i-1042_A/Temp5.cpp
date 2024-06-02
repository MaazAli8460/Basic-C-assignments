
//Maaz Ali, 22I-1042, assignment#01

#include<iostream>
using namespace std;
int main()
{
	float wage,work_hours,withholding_tax,net_pay,value;
	double percent_tax;
	cout<<"\n Enter your hourly wage:";
	cin>>wage;
	cout<<"\n Enter your work hours:";
	cin>>work_hours;
	cout<<"\n Enter your withholding_tax:";
	cin>>withholding_tax;
	
	
	value=wage*work_hours;                       //gives the total wage of worker
	percent_tax=(withholding_tax/100)*value;     //gives the total amount of tax on wage
	
	net_pay=value-percent_tax;
	cout<<"\nNet pay:"<<net_pay<<endl;


	return 0;


}
