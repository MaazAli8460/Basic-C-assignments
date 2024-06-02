#include <iostream>
using namespace std;
int main()
{
	cout<<"\nMaaz Ali \tRoll no:22i-1042";
	int lim,f1,f2,f3;
	cout<<"\nEnter the limit of series:";
	cin>>lim;
		
	for(int i=1;i<=lim;i++)
	{
	

		if(i==1)
		{
		cout<<"1"<<endl;
		}
		if(i==2)
		cout<<"1  1"<<endl;
		
		else
		{
		f1=1;
		f2=1;
		cout<<"1  1 ";
		for(int j=0;j<i-2;j++)
		{
		f3=f1+f2;
		cout<<"  "<<f3<<"  ";
		f1=f2;
		f2=f3;
		}
		cout<<endl;
		}
	}	
	
	return 0;
	
}
