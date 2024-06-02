/* Roll No: 22I-1042
   Name: Maaz Ali
   Assignment 02  */
   
   
#include<iostream>
using namespace std;
int main()
{
	int null,num1,num2,num3,num4,x;
	cout<<"\n Enter number 1:";
	cin>>num1;
	cout<<"\n Enter number 2:";
	cin>>num2;
	cout<<"\n Enter number 3:";
	cin>>num3;
	cout<<"\n Enter number 4:";
	cin>>num4;
	cout<<"\nEnter The Number OF Variables You Need To Operate on (3 or 4) ONLY:";
	cin>>null;
	cout<<endl;
	
	(null==3)?(num1>num2 && num1>num3)?cout<<num1<<" Is The Largest Number."<<endl:(num2>num1 && num2>num3)?cout<<num2<<" Is The Largest Number."<<endl:cout<<num3<<" Is The Largest Number."<<endl:(null==4)?(num1>num2 && num1>num3 && num1>num4)?cout<<num1<<" Is The Largest Number."<<endl:(num2>num1 && num2>num3 && num2>num4)?cout<<num2<<" Is The Largest Number."<<endl:(num3>num1 && num3>num2 && num3>num4)?cout<<num3<<" Is The Largest Number."<<endl:cout<<num4<<" Is The Largest Number."<<endl:cout<<" Wrong Entry."<<endl;
	
	
		
	return 0;

} 
