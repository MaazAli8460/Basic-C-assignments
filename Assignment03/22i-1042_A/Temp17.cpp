/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
using namespace std;
int main()
{
	int k=0,x;
	cout<<"\nEnter the number:";
	cin>>x;
	
	
	while(x<=0)
	{
		cout<<"\nWrong input Enter the number again:";
		cin>>x;
	}
	
	cout<<"\nStarting with number="<<x;
	while(x>=1)
		{
			cout<<"\n"<<x;
			if(x%2==0)
			{
				cout<<" Since number is even so I take half:";
				x=x/2;
				cout<<x;
			}
			else
			{
				if(x==1)
				break;
				
				else
				cout<<" Since number is odd so I make 3n+1:";
				x=3*x+1;
				cout<<x;
			}
			k++;
		}

		cout<<"\nk="<<k;

	return 0;
}
