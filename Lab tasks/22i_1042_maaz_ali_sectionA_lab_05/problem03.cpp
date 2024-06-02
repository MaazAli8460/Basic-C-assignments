#include<iostream>
using namespace std;
int main()
{
	unsigned i=0,user_input;
	cout<<"\n Enter a number:";
	cin>>user_input;
	i=user_input;
	i=i<<1;
	cout<<"\nDoubled="<<i;
	i=i+10;
	cout<<"\nAdded 10="<<i;
	i=i>>1;
	cout<<"\nHalfed="<<i;
	i=i-user_input;
	cout<<"\nSubtracted"<<user_input<<":"<<i;
	cout<<"\n Final number="<<i;




	return 0;


}
