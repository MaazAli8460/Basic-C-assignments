#include<iostream>
using namespace std;
int main()
{
	int arr1[4],arr2[4],arr3[8],arr4[4];
	int i=0,j,x=0;
	cout<<"\nArray # 1=";
	while(i<4)
	{
		cin>>arr1[i];
		i++;
	}
	cout<<"\nArray # 2=";
	i=0;
	while(i<4)
	{
		cin>>arr2[i];
		i++;
	}
	
	//for(i=0;i<4;i++)
	//{
	//	arr3[x]=arr1[i];
	//	x++;
	
	//}
	//for(i=0;i<4;i++)
	//{
	//	if(arr2[i]!=arr1[i])
	
	//}
	

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		
		{
			if(arr1[i]==arr2[j])
			{arr4[x]=arr1[i];
			x++;}
		
		}
	
	}
	
	i=0;
	cout<<"\nDuplicate sequence:\n";
	while(i<4)
	{	
		if(arr4[i]==0)
		break;
		cout<<arr4[i]<<" , ";
		i++;
		
	}
	i=0;
	cout<<"\nNon-Duplicate sequence:\n";
	while(i<4)
	{	
		
		arr3[i]=arr1[i];
		i++;
		
	}
	for(int j=0;j<4;j++)
	{
		for(int k=0;k<4;k++)
		{
			if(arr3[k]==arr2[j])
			continue;
			
			else
			break;
		}
		arr3[i]=arr2[j];
				i++;
	
	}
	for(int k=0;k<8;k++)
	{
		for(int j=0;j<4;j++)
			{
				if(arr4[j]==arr3[k])
				{
				arr3[k]=0;
				break;
				}
				
				else
				continue;

			}
		if(arr3[k]!=0)
		cout<<arr3[k]<<" , ";
			
	}
	i=0;
	while(i<4)
	{	
		if(arr4[i]==0)
		break;
		cout<<arr4[i]<<" , ";
		i++;
		
	}
	


	return 0;
}
