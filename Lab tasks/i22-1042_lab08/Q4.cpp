#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int num,num2,sum,ucount=0,ccount=0;
	
	cout<<"\nWelcome to odds and even game.\nComputer will be even:";
	cout<<"\nRange is [1,10]";
	cin>>num;
	while(num>=1 && num<=10)
	{
		num2=rand()%11;
		sum=num+num2;
		cout<<"sum="<<sum;
		
		if(sum%2==0)
		{cout<<"\nComputer wins";
		ccount++;}
		else
		{cout<<"\nUser wins.";
		ucount++;}
		
		
		cout<<"\nRange is [1,10] if you do not want to play enter out of range:";
		cin>>num;	
	}	
	
	cout<<"\nComputer score:"<<ccount;
	cout<<"\nUser score"<<ucount<<endl;


return 0;
}
