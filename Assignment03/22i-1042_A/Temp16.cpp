/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
using namespace std;
int main()
{
	double loan,intrest,mpay,count=0,mintrest,pamount; //mintrest=monthly intrest and intrest= intrest percentage and pamount=principle amount.
	cout<<"\nEnter Total loan amount:";
	cin>>loan;
	cout<<"\nEnter intrest percent:";
	cin>>intrest;
	cout<<"\nEnter monthly payment amount:";
	cin>>mpay;
	
	    while(loan<=0 || intrest<=0 || mpay<=0)
   	 {
   		cout<<"Wrong input enter again...."<<endl;
  		cout<<"\nEnter Total loan amount:";
		cin>>loan;
		cout<<"\nEnter intrest percent:";
		cin>>intrest;
		cout<<"\nEnter monthly payment amount:";
		cin>>mpay;
  	 }
	
	if(loan>0.0 && intrest>0.0 && mpay>0.0)
	{	while(loan>0)
		{	
			mintrest=((intrest/100)*loan)/12;
			if(mintrest>mpay)
			{
				cout<<"\nThe monthly payment is low and loan cannot be payed.";
				return 0;
			}
			pamount=mpay-mintrest;
			loan=loan-pamount;
			count++;
		}
	
	}

	cout<<"\nYour loan will be repayed in "<<count<<"months...";

	return 0;
	
}
