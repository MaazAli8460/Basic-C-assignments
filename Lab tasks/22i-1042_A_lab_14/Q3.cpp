#include<iostream>
#include<string.h>
using namespace std;

static string rev(string &string1);

int main()
{
	string string1;
	cout<<"\nEnter the string:";
	getline(cin,string1);
	cout<<"\nReverse of: "<<string1<<": is : "<<rev(string1);
	
	
	return 0;
	


}

static string rev(string &string1)
{
	string reverse;
	if(string1.length()==0)
	return string1;
	reverse=string1.substr(1);
	return rev(reverse)+string1[0];

}
