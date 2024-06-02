#include<iostream>
using namespace std;
int main()
{

	char arr2[5]={'a','e','i','o','u'};
	char arr1[100];
	char x;
	int count, i, j;
	bool flag;
	cout<<"\nENter the character array:";

	cin>>arr1;
	
	cout<<"\nReturned array has:";
	for(i=0;i<5;i++)
	{
		for(j=0;arr1[j]!='\0';j++)
		{
			if(arr1[j]==arr2[i])
			{
				cout<<arr2[i]<<" ";
				break;
			}
		
		}
	
	}
	
	cout<<"\nEnter the character you want to check:";
	cin>>x;
	for(j=0;arr1[j]!='\0';j++)
	{
		if(arr1[j]==x)
		{
			count++;
			
		}
		
	}
	cout<<"\ncount("<<x<<") is:"<<count;
	
	if(count>0)
	flag=true;
	
	else 
	flag=false;
	
	
	if(flag)
	cout<<"\ncount("<<x<<") returned:"<<flag;
	
	else
	cout<<"\ncount("<<x<<") returned:"<<flag;



return 0;

}
