#include <iostream>
using namespace std;
int main()
{
	cout<<"\nMaaz Ali \tRoll no:22i-1042";
	int num,prime;
	cout<<"\nEnter number:";
	cin>>num;
	cout<<"\nLast prime number:";
	
	for(int i=1;i<num;i++)
	{
		int count=0;
		for(int j=2;j<=num/2;j++)
		{
			if(i%j==0)
			count++;
		}
		
		if(count==0)
		prime=i;
	
	
	}
	cout<<prime;
	
	
	return 0;
	
}
