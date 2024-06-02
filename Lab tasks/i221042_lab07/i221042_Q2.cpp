#include<iostream>
using namespace std;
int main()
{
	cout<<"\nname=Maaz Ali  Roll no=22i-1042"<<endl;
	char input;
	cout<<"\n Enter the input:";
	cin>>input;
	
	switch(input)
	{
		case ('a')...('z'):
		cout<<"\nlower case character";
		break;
		
		case ('A')...('Z'):
		cout<<"\nUpper case character";
		break;
		
		case ('0')...('9'):
		cout<<"\nNumerical character";
		break;
	
		default:
		cout<<"\nInvalid input.";
	}
	
	
	return 0;
}
