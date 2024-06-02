#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"\nname=Maaz Ali  Roll no=22i-1042"<<endl;
	int choice,choice1;;
	float balance=25000;
	char bank;
	string name="Maaz Ali.",name2;
	cout<<"---Welcome to Fast Bank---\n"<<"1.My Account\n"<<"2.Funds Transfer\n"<<"3.Load Mobile Bundles\n"<<"Enter your choice:\n";
	cin>>choice;
	
	switch(choice)
	{
	case 1:
		cout<<"name:"<<name<<endl<<"balance:"<<balance;
		break;
	
	case 2:
		cout<<"\nEnter name Beneficiary:";
		cin>>name2;
		cout<<"\nselect bank of beneficiary\n"<<"a.Alfalah Bank\n"<<"b.Bank of Punjab\n"<<"f.Fast bank\n"<<"Enter your choice:\n";
		cin>>bank;
		if(bank=='f')
			{
			cout<<"\nEnter the amount to transfer:";
			float amount;
			cin>>amount;
				if(amount>balance)
				{cout<<"\ninvalid amount";
				return 0;}
				
				else if(amount>5000)
				cout<<"\nRs"<<amount<<" have been transferred to "<<name2<<" your balance is"<<balance-amount;
				
				else
				cout<<"\n Low balance.";
			}
		else
		cout<<"\nDose not have Fast acount.";
		break;
	case 3:
		if(balance>5000)
		{
			cout<<"u.Ufone\nt.telenor";
			char network;
			cin>>network;
			switch(network)
				{
				case 'u':
					cout<<"1.Super card plus\n2.Super card gold";
	
					cin>>choice1;
					if(choice1==1)
					cout<<"\nSuper card plus has been loaded. balance="<<balance-699;
					else if(choice==2)
					cout<<"\nSuper card gold has been loaded. balance="<<balance-1099;
					else
					cout<<"\ninvalid";
				break;
	
				case 't':
					cout<<"1.monthly easy card\n2.weekly easy card:";
					cin>>choice1;
					if(choice1==1)
					cout<<"\nmonthly easy card has been loaded. balance="<<balance-700;
					else if(choice==2)
					cout<<"\nweekly easy card has been loaded. balance="<<balance-300;
						else
					cout<<"\ninvalid.";
				break;
				default:
				cout<<"\ninvalid.";
				}
	
		}
		else
		cout<<"\nLow Balance.";
		break;
		
	default:
	cout<<"\ninvalid.";
	}
	
	return 0;
}
