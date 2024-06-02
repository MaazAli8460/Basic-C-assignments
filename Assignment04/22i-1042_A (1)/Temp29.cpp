/*
  Maaz Ali
  22i-1042
  Assignment#04
*/

#include<iostream>

using namespace std;
int main()
{

	bool flag=true;
	int temp;
	int x=3,y=4,z=5,a=5,b=5;
	
	cout<<"\nEnter array in assending order.....";

	cout<<"\nEnter array:";
	int arr1[x];
	for(int i=0;i<x;i++)
	cin>>arr1[i];
	for(int j=0;j<x;j++)
	{
		if(arr1[j]>arr1[j+1] && j+1<x)
		{
			flag=false;
			break;
		}
	}

	cout<<"\nEnter array:";
	int arr2[y];
	for(int i=0;i<y;i++)
	cin>>arr2[i];
	for(int j=0;j<y;j++)
	{
		if(arr2[j]>arr2[j+1] && j+1<y)
		{
			flag=false;
			break;
		}
	}

	cout<<"\nEnter array:";
	int arr3[z];
	for(int i=0;i<z;i++)
	cin>>arr3[i];
	for(int j=0;j<z;j++)
	{
		if(arr3[j]>arr3[j+1] && j+1<z)
		{
			flag=false;
			break;
		}
	}

	cout<<"\nEnter array:";
	int arr4[a];
	for(int i=0;i<a;i++)
	cin>>arr4[i];
	for(int j=0;j<a;j++)
	{
		if(arr4[j]>arr4[j+1] && j+1<a)
		{
			flag=false;
			break;
		}
	}

	cout<<"\nEnter array:";
	int arr5[b];
	for(int i=0;i<b;i++)
	cin>>arr5[i];
	for(int j=0;j<b;j++)
	{
		if(arr5[j]>arr5[j+1] && j+1<b)
		{
			flag=false;
			break;
		}
	}
	
	if(flag==false)
	{
		cout<<"\nRead input in correct format....";

	}	


	while(flag==false)
	{

	cout<<"\nEnter array:";
	int arr1[x];
	for(int i=0;i<x;i++)
	cin>>arr1[i];
	for(int j=0;j<x;j++)
	{
		if(arr1[j]>arr1[j+1] && j+1<x)
		{
			flag=false;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"\nRead input in correct format....";
		continue;
	}

	cout<<"\nEnter array:";
	int arr2[y];
	for(int i=0;i<y;i++)
	cin>>arr2[i];
	for(int j=0;j<y;j++)
	{
		if(arr2[j]>arr2[j+1] && j+1<y)
		{
			flag=false;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"\nRead input in correct format....";
		continue;
	}

	cout<<"\nEnter array:";
	int arr3[z];
	for(int i=0;i<z;i++)
	cin>>arr3[i];
	for(int j=0;j<z;j++)
	{
		if(arr3[j]>arr3[j+1] && j+1<z)
		{
			flag=false;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"\nRead input in correct format....";
		continue;
	}

	cout<<"\nEnter array:";
	int arr4[a];
	for(int i=0;i<a;i++)
	cin>>arr4[i];
	for(int j=0;j<a;j++)
	{
		if(arr4[j]>arr4[j+1] && j+1<a)
		{
			flag=false;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"\nRead input in correct format....";
		continue;
	}

	cout<<"\nEnter array:";
	int arr5[b];
	for(int i=0;i<b;i++)
	cin>>arr5[i];
	for(int j=0;j<b;j++)
	{
		if(arr5[j]>arr5[j+1] && j+1<b)
		{
			flag=false;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"\nRead input in correct format....";
		continue;
	}	

	
	
	}
	
	int c=x+y+z+a+b;
	int arrf[c];
	for(int i=0;i<x;i++)
		arrf[i]=arr1[i];
	temp=x;
	//cout<<"\n"<<temp;
	for(int i=0;i<y;i++)
	{
		arrf[temp]=arr2[i];
		temp++;
	}
	//cout<<"\n"<<temp;
	for(int i=0;i<z;i++)
	{
		arrf[temp]=arr3[i];
		temp++;
	}
	//cout<<"\n"<<temp;
	for(int i=0;i<a;i++)
	{
		arrf[temp]=arr4[i];
		temp++;
	}	
	//cout<<"\n"<<temp;
	for(int i=0;i<b;i++)
	{
		arrf[temp]=arr5[i];
		temp++;
	}
	//cout<<"\n"<<temp;
	
	
	temp=0;
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(arrf[j]<arrf[j+1] && j+1<c)
			{
				temp=arrf[j];
				arrf[j]=arrf[j+1];
				arrf[j+1]=temp;
			}
		}
	}
	temp=0;
	for(int i=0;i<c;i++)
	{
		for(int j=i+1;j<c;j++)
		{
			if(arrf[i]==arrf[j])
			{
				for(temp=j;temp<c;temp++)
				arrf[temp]=arrf[temp+1];
			}
			temp=0;
		}	
	
	}
	
	
	cout<<"\nFinal Array=";
	for(int i=0;i<c;i++)
	{
	if(arrf[i]==arrf[i+1] && i+1<c)
	continue;
	cout<<arrf[i]<<',';
	}

	return 0;


	
}



