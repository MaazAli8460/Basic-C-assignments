#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int  num,lastdigit;
	int firstdigit;
	cout<<"Enter a 4 digit number";
	cin>>num;
	
	firstdigit=num/1000;
	cout<<"\n First digit is="<<firstdigit;
	lastdigit=num%10;
	cout<<"\n Last digit is="<<lastdigit;
	cout<<"\n sum of"<<firstdigit<<" and "<<lastdigit<<"="<<firstdigit+lastdigit<<endl;
	
	
	return 0;
	}
