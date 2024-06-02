#include<iostream>
using namespace std;
int main()
{
	cout<<"\nname=Maaz Ali  Roll no=22i-1042"<<endl;
	int age;
	char gender,choice;
	cout<<"\n Enter your gender (m/f):";
	cin>>gender;
	cout<<"\n Enter your age:";
	cin>>age;
	
	if(gender=='m')
	{
		(age<25)?cout<<"\nYou can enjoy the rides":cout<<"\nSorry, these rides are not safe for you";
		cout<<"\nYour age="<<age;
	 
	}
	else if(gender=='f')
	{
		
		cout<<"\nDo you have any health issues(y/n):";
		cin>>choice;
		(choice=='n')?cout<<"\nYou can enjoy the rides.":cout<<"Sorry, these rides are not safe for you.";
		cout<<"\nYour age="<<age;
	}
	
	else
		cout<<"\n Enter a valid gender.";


	return 0;
}
