#include<iostream>
using namespace std;
int main()
{
	cout<<"\nname=Maaz Ali  Roll no=22i-1042"<<endl;
	int ac_no,c_code,no_connections;
	float no_channels;
	char customer;
	cout<<"Enter your acount no:";
	cin>>ac_no;
	cout<<"Enter your coustomer code:";
	cin>>c_code;
	cout<<"Enter your type of connection (r for residential/b for business):";
	cin>>customer;
	cout<<"Enter number of premium channels:";
	cin>>no_channels;
	
	
	switch(customer)
	{
		case 'r':
		case 'R':
			cout<<"\nCoustomer Acount no:"<<ac_no<<"Customer Code:"<<c_code;
			cout<<"\nTotal bill:$"<<4.50+20.00+(7.50*no_channels);
			break;
		
		case 'b':
		case 'B':
			cout<<"\nEnter Basic services connection:";
			cin>>no_connections;
			cout<<"\nCoustomer Acount no:"<<ac_no<<"Customer Code:"<<c_code;
		
			if(no_connections>=0 && no_connections<=10)
			cout<<"\nTotal bill:$"<<15.00+75.00+(50.00*no_channels);
		
			else
			cout<<"\nTotal bill:$"<<15.00+75.00+((no_connections%10)*5.00)+(50.00*no_channels);
	
		break;
		
		default:
			cout<<"\nEnter valid data...";
	}
	
	

	return 0;
}
