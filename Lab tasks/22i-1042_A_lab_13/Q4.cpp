#include<iostream>
double decreasingSort(double &a, double &b);
using namespace std;
int main()
{
	double num1,num2,num3;
	cout<<"\nENter num1:";
	cin>>num1;
	cout<<"\nENter num2:";
	cin>>num2;
	cout<<"\nENter num3:";
	cin>>num3;
	
	cout<<"\n Before ordering:\n"<<num1<<" "<<num2<<" "<<num3;
	decreasingSort(num1,num2);
	decreasingSort(num2,num3);
	decreasingSort(num1,num2);
	cout<<endl<<num1<<" "<<num2<<" "<<num3;
	
	return 0;
	

}
double decreasingSort(double &a, double &b)
{
	double temp;
	if(a<b && (a>0 && b>0))
	{
		temp=a;
		a=b;
		b=temp;
	
	}
	return 0;
}
