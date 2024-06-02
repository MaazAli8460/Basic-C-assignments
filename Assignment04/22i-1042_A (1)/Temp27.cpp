/*
  Maaz Ali
  22i-1042
  Assignment#04
*/

#include<iostream>
double evaluatePolynomial();
using namespace std;
int main()
{
	double result;
	result=evaluatePolynomial();
	if(result==2147483647)
		cout<<"\nError(power must be >=0)";
	else
	cout<<"\nOutput:"<<result;

	return 0;
}
double evaluatePolynomial()
{
	double num,a,output=0,temp;
	int p;
	cout<<"\nEnter x:";
	cin>>num;
	cout<<"\nEnter power:";
	cin>>p;
	if(p<0)
	{
		p=2147483647;
		return p;
	}
	else if(num==0)
	{
		return num;
	
	}
	temp=p+1;
	cout<<"\nEnter "<<temp<<"coefficients in desending order of power:";
	temp=1;
	
	for(int i=p;i>=0;i--)
	{
		cin>>a;
		for(int j=1;j<=i;j++)
		{
			temp=temp*num;
			cout<<"temp="<<temp<<endl;
		
		}
		
		output=output+(a*temp);
		cout<<"output="<<output<<endl;
		temp=1;
	}
	
	return output;

}
