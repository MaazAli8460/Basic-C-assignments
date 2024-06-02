#include <iostream>
using namespace std;
int main()
{
	cout<<"\nMaaz Ali \tRoll no:22i-1042";
	int n, reversed_number = 0, remainder;
	for(int i=99;i>=0;i--)	  
	{

	n=i;
	
  	while(n != 0) 
  	{
   	 remainder = n % 10;
   	 
  	 reversed_number = remainder * 10 + remainder;
 	 n /= 10;
 	   
 	 }

  	if(reversed_number==i)
  	cout<<endl<<reversed_number<<" is a palindrome number."<<endl;
	
	
	}
	
	for(int k=9;k>=1;k--)
	{
	cout<<k<<" is a palindrome number."<<endl;
	
	}
	


  
	
	return 0;
	
}
