
//Maaz Ali, 22I-1042, assignment#01

#include<iostream>
using namespace std;
int main()
{
	int amount;
	cout<<"\n Enter a amount in rupees from 100 - 100000:";
	cin>>amount;
	
	cout<<"Currency Note        :Number";
	cout<<"\n500                  :"<<amount/500;      //division of int type variable gives us amount of 500 notes present
	amount=amount%500;                                 //mod function will give us the amount after all 500 notes are eliminated
	cout<<"\n100                  :"<<amount/100;
	amount=amount%100;
	cout<<"\n50                   :"<<amount/50;
	amount=amount%50;
	cout<<"\n20                   :"<<amount/20;
	amount=amount%20;
	cout<<"\n10                   :"<<amount/10;
	amount=amount%10;
	cout<<"\n5                    :"<<amount/5;
	amount=amount%5;
	cout<<"\n1                    :"<<amount/1<<endl;

	return 0;


}
