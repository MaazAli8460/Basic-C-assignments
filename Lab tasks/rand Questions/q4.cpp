#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	int i,a,b;
	int u=3;
	int p=4;
	float result,powers ;
	double upper,lower;
	cout<<"\nEnter value of i";
	cin>>i;
	cout<<"\nEnter value of a";
	cin>>a;
	cout<<"\nEnter value of b";	
	cin>>b;
	powers=(float)a/b;
	upper=static_cast<double>(pow((u*pow(i,powers))*(pow(i,2)-1),0.5));
	lower=static_cast<double>(pow((p*i-2),0.5)+pow((p*i-1)*0.5));
	result=upper/lower;
	cout<<"\nResult="<<result<<endl;
	
	return 0;
	}
