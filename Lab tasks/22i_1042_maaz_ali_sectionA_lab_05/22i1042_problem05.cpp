#include<iostream>
using namespace std;
int main()
{
	int num,num2,op1,op2;
	cout<<"\nEnter a number:";
	cin>>num;
	num2=num;
	num2=num2-1;
	op1=(num&num2);
	op2=!op1;
	cout<<"\n If output =1 its power of 2 if output=0 its not power of 2 OUTPUT="<<op2;
	





	return 0;
}
