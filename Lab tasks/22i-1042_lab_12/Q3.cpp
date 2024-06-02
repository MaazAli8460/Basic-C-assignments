#include<iostream>
using namespace std;
int main()
{
	int count,temp,word1=0,word2=0;
	const int row=30;
	char arr1[row],arr3[row],arr2[row];
	cout<<"\nEnter the words seperated by comma:";
	cout<<"\nEnter 1 array:";
	cin.getline(arr1,row);
	cout<<"\nEnter 2 array:";
	cin.getline(arr2,row);
	cout<<"\nEnter 3 array:";
	cin.getline(arr3,row);


	for(int k=0;arr1[k]!=',';k++)
		{
			if(arr1[k]!=',')
			count++;
			word1++;
		
		}
		
		count++;

		for(int j=count;arr1[j]!='\0';j++)
		{
			if(arr1[j]!='\0')
			word2++;
		
		}
		for(int k=0;k<count;k++)
		{
			if(arr1[k]==arr1[count] && arr1[k]!=',')
			{
			temp++;
			count++;
			}
			else
			continue;
		
		}
		
		
		count=count-temp-1;

		if(temp==count)
		cout<<"\nEqual.";
		else if(word1==word2)
		cout<<"\nsame.";
		else
		cout<<"\ndiffrent";
		
		temp=0;
		count=0;
		word1=0;
		word2=0;
		
		
		for(int k=0;arr2[k]!=',';k++)
		{
			if(arr2[k]!=',')
			count++;
			word1++;
		
		}
		
		count++;
		//cout<<count<<endl;
		for(int j=count;arr2[j]!='\0';j++)
		{
			if(arr2[j]!='\0')
			word2++;
		
		}
		for(int k=0;k<count;k++)
		{
			if(arr2[k]==arr2[count] && arr2[k]!=',')
			{
			temp++;
			count++;
			}
			else
			continue;
		
		}
		
		
		count=count-temp-1;

		
		if(temp==count)
		cout<<"\nEqual.";
		else if(word1==word2)
		cout<<"\nsame.";
		else
		cout<<"\ndiffrent";
		
		
		temp=0;
		count=0;
		word1=0;
		word2=0;
		
		for(int k=0;arr3[k]!=',';k++)
		{
			if(arr3[k]!=',')
			count++;
			word1++;
		
		}
		
		count++;
		//cout<<count<<endl;
		for(int j=count;arr3[j]!='\0';j++)
		{
			if(arr3[j]!='\0')
			word2++;
		
		}
		for(int k=0;k<count;k++)
		{
			if(arr3[k]==arr3[count] && arr3[k]!=',')
			{
			temp++;
			count++;
			}
			else
			continue;
		
		}
		
		
		count=count-temp-1;
		//cout<<temp<<endl;
		//cout<<count<<endl;
		
		//cout<<word1<<endl;
		//cout<<word2<<endl;
		
		if(temp==count)
		cout<<"\nEqual.";
		else if(word1==word2)
		cout<<"\nsame.";
		else
		cout<<"\ndiffrent";
		
		
		
	




return 0;
}
