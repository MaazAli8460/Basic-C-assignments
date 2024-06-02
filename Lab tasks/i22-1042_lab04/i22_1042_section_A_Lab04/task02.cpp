#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int num_1,num_2,num_3,add,sub,multiply,mod;
	float div;
	cout<<"\nEnter first number;";
	cin>>num_1;
	cout<<"\nEnter second number:";
	cin>>num_2;
	cout<<"\nEnter third number:";
	cin>>num_3;
	add=num_1+num_2+num_3;
	sub=num_1-num_2-num_3;
	multiply=num_1*num_2*num_3;
	div=static_cast<double> (num_1)/num_2/num_3;
	mod=(num_1%num_2)%num_3;
	cout<<"\n Addition="<<add;
	cout<<"\n Substraction="<<sub;
	cout<<"\n multiplication="<<multiply;
	cout<<"\n Mod="<<mod;
	cout<<"\n Division="<<div<<endl;
	
	
	return 0;
	
}
