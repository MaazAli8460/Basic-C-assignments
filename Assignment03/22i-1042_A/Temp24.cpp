/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int new_pair=0,old_pair=1,total,months,k=0;
	cout<<"\nEnter the number of months:";
	cin>>months;
	while(months<=0)
	{
		cout<<"\nWrong input...";
		cout<<"\nEnter the number of months:";
		cin>>months;
	}
	
	cout<<"\nAt start:";
	for(int i=0;i<=months;i=i+2)
		{
			cout<<"\n New pair:"<<new_pair;
			cout<<"\n old pair:"<<old_pair;
			total=new_pair+old_pair;
			cout<<"\n Total pair:"<<total<<endl;
			
			for(int j=1;j<=old_pair;j++)
			{
				new_pair=old_pair;
				
			
			}
			old_pair=total;
			k+=2;
			if(k<=months)
			cout<<"\nAfter month:"<<k;
		
		}

	
	
	return 0;
}
