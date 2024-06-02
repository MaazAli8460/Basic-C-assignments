#include<iostream>
using namespace std;
int main()
{
	cout<<"\n name: MAAZ Ali Roll no: 22i-1042"<<endl;
	double amount,discount;
	cout<<"\n enter the total purchase amount : ";
	cin>>amount;

	if(amount>2000)
		{
		        cout<<"\nDiscount Aplicable";
		        discount=(10.0/100)*amount;
		        amount=amount-discount;
		        cout<<"\n The total purchase value after discount:"<<amount;
		        
		 }
		 
        else
        {
          cout<<"\n  Discount is not applicable";
         // cout<<"\n the total purchase value after discount is:"<<amount<<endl;
        
        }
		


	return 0;
}
