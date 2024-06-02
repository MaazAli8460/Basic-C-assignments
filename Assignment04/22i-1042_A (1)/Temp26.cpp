/*
  Maaz Ali
  22i-1042
  Assignment#04
*/

#include<iostream>
int digit(int n,int k);
using namespace std;
int main()
{
	int x,y,z;
	cout<<"\nEnter the number:";
	cin>>x;
	cout<<"\nEnter the call digit K:";
	cin>>y;
	z= digit(x,y);
	if(z==101)
	{
		cout<<"\nIndex out of bound (return-1)";
	}
	else
	cout<<"\n"<<y<<" position:"<<z;


return 0;
}

int digit(int n,int k)
{
	int mod=10,mod1=10,temp,count=0,temp1;
	temp=n;
	for(int j=0;temp!=0;j++)
	{
		if(temp==0)
		break;
		temp=temp/10;
		count++;
	}
	if(k>=count)
	{
	temp1=101;
	return temp1;
	}
	count=count-k;
	for(int i=1;i<=count;i++)
	{
		temp=n;
		if(temp==0)
		break;
		else
		temp1=temp%mod;
		mod = mod * 10;
		if(temp1>=10 || temp1<=-10)
		{temp1/=mod1;
		mod1*=10;
		}	
	}
	return temp1;		
}
