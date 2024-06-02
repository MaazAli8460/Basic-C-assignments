#include<iostream>
using namespace std;

int pell(int x);

int main()
{
	int pos;
	cout<<"\nEnter the position you want to find:";
	cin>>pos;
	cout<<"\n The value="<<pell(pos);

	return 0;
}


int pell(int x)
{
	int n;
	if(x<=2)
	return x;
	
	n=2*pell(x-1)+pell(x-2);	

	return n;

}
