
//Maaz Ali, 22I-1042, assignment#01


#include<iostream>
using namespace std;
int main()
{
	cout<<"\n Enter uppercase letter:";
	char uppercase_letter,lowercase_letter;
	int a;
	cin>>uppercase_letter;
	
	a=uppercase_letter;   //this will store ascii value of capital alphabet in variable
	
	a=a+32;               //by adding 32 to ascii of capital alphabet we will reach ascii of its lowercase alphabet 
	
	lowercase_letter=a;   //since lowercase variable is declared in char type the ascii when cout will display lowercase alphabet
	
	cout<<"\n lower case of letter is: "<<lowercase_letter<<endl;


	return 0;
}
