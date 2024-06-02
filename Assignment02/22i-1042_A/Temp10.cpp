/* Roll No: 22I-1042
   Name: Maaz Ali
   Assignment 02  */
   
   
#include<iostream>
using namespace std;
int main()
{
	int day,month;
	cout<<"\n Enter The Day:";
	cin>>day;
	cout<<"\n Enter The Month:";
	cin>>month;
	
	if ((month>0 && month<=12) && (day>=1 && day<=31))
	
	   {
		switch(month)
		{
			case 12:
				if(day>=16 && day<=31)
				cout<<" Winter\n";
				else if(day>0 && day<=15)
				cout<<"Fall\n";
				else
				cout<<"\nError...";
				break;
			case 1:
				if(day<=31 && day>0)
				cout<<" Winter\n";
				else
				cout<<"\nError...";
				break;
			case 2:
				if(day<=29 && day>0)
				cout<<" Winter\n";
				else
				cout<<"\nError...";
				break;
			case 3:
				if(day<=15 && day>0)
				cout<<" Winter\n";
				else if(day>=16 && day<=31)
				cout<<" Spring\n";
				else
				cout<<"\nError...";
				break;
			case 4:
				if(day>0 && day<=30)
				cout<<" Spring\n";
				else
				cout<<"error...";
				break;
			case 5:
				if(day>0 && day<=31)
				cout<<" Spring\n";
				else
				cout<<"error...";
				break;
			case 6:
				if(day>0 && day<=15)
				cout<<" Spring\n";
				else if(day>=16 && day<=30)
				cout<<"summer\n";
				else
				cout<<"error...";
				break;
			case 7:
				if(day>0 && day<=31)
				cout<<" Summer\n";
				else
				cout<<"error...";
				break;
			case 8:
				if(day>0 && day<=31)
				cout<<" Summer\n";
				else
				cout<<"error...";
				break;
			case 9:
				if(day>0 && day<=15)
				cout<<" Spring\n";
				else if(day>=16 && day<=30)
				cout<<" Fall\n";
				else
				cout<<"error...";
				break;
			case 10:
				if(day>0 && day<=31)
				cout<<" Fall\n";
				else
				cout<<"error...";
				break;
			case 11:
				if(day>0 && day<=31)
				cout<<" Fall\n";
				else
				cout<<"error...";
				break;
				
			default:
				cout<<"\nError...";
	   }
	  
	 }
	     
	else
	cout<<"\n ENTER A VALID DAY AND MONTH";
	
	
	return 0;

}
