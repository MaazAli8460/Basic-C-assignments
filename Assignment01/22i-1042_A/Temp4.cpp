
//Maaz Ali, 22I-1042, assignment#01

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int const u=3;
	int const p=4;
	int i,a,b;
	double result;
	cout<<"\n ENTER THE VALUE OF INTEGER I:";
	cin>>i;
	cout<<"\n ENTER THE VALUE OF IETEGER A:";
	cin>>a;
	cout<<"\n ENTER THE VALUE OF INTEGER B:";
	cin>>b;
	
	
	result=static_cast<double>((pow((u*pow(i,(double)a/b))*(pow(i,2)-1),0.5))/(pow((p*i-2),0.5)+pow((p*i-1),0.5)));
	
	
	cout<<"\nResult="<<result<<endl;
	
	return 0;


}
