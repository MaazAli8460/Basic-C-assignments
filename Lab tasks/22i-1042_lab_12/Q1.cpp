#include<iostream>
using namespace std;
int main()
{

	const int row=5,col=5;
	int matrix1[row][col],x,resultant1[row][col],temp1[row][col];
	cout<<"\nEnter the number:";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cin>>matrix1[i][j];
		temp1[i][j]=matrix1[i][j];
		}
	
	}
	cout<<"\n Enter the number you want to divide:";
	cin>>x;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<matrix1[i][j]<<" ";
		
		}
		if(i==2)
		cout<<"\t/"<<x;
		
		cout<<"\n";
		
	}
	cout<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		resultant1[i][j]=temp1[i][j]/x;
		cout<<resultant1[i][j]<<" ";
		}
		
		cout<<endl;
	}


	int matrix2[row][col],resultant2[row][col],temp2[row][col];
	cout<<"\nEnter the number matrix2:";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cin>>matrix2[i][j];
		
		}
	
	}
	cout<<"\n Enter the number you want to multiply:";
	cin>>x;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		temp2[i][j]=x*matrix2[i][j];
		cout<<matrix2[i][j]+temp2[i][j]<<" ";
		
		}
		if(i==2)
		cout<<"\t*"<<x;
		
		cout<<"\n";
		
	}


	return 0;
}
