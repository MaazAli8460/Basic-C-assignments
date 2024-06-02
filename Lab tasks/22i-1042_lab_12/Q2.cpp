#include<iostream>
using namespace std;
int main()
{

	const int row=2,col=2;
	int matrix1[row][col],matrix2[row][col],temp[row][col];
	cout<<"\nEnter the matrix 1:";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cin>>matrix1[i][j];
		}
	
	}
	cout<<"\nEnter the matrix 2:";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cin>>matrix2[i][j];
		}
	
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		temp[i][j]=matrix1[i][j]*matrix2[i][j];
		}
	
	}
	cout<<"\nDot product=";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<temp[i][j]+temp[i][j+1]<<"  ";
		j++;
		
		}
	
	}
	cout<<"\nCross product=\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<matrix1[i][j]*matrix2[i][j]<<" ";
		}
		cout<<endl;
	
	}
	
return 0;
}
