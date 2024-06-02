#include<iostream>
#include<string>

using namespace std;

void concatt(string &triangle,char ch);

int main()
{
	int s,count=0;
	string triangle;
	cout<<"\nEnter size of triangle:";
	cin>> s;
	
	int space;
	char x;
	space=s-1;
	for(int j=0;j<s;j++)
	{
		for(int i=0;i<space;i++)
		{
			concatt(triangle,' ');	
			count++;
		}
			cout<<"\nEnter the character:";
			cin>>x;
		for(int z=count;z<s;z++)
		concatt(triangle,x);
		
		
		concatt(triangle,'\n');
		space--;
		count=0;
	}
	
	cout<<triangle;

	

	


	return 0;
}
void concatt(string &triangle,char ch)
{
	triangle=triangle+ch;


}

