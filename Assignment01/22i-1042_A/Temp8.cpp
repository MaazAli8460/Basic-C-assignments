
//Maaz Ali, 22I-1042, assignment#01

#include<iostream>
using namespace std;
int main()
{
	int first_number,second_number,carry;
	cout<<"\nEnter first number:";
	cin>>first_number;
	cout<<"\nEnter second number:";
	cin>>second_number;
	
	
	carry = first_number & second_number;           //the carry vallue is calculated
	first_number = first_number ^ second_number;    //the sum value is calculated here to be stored in first number
   	second_number = carry << 1;                     //the carry is shifted by 1 bit to left and stored in second number   


	carry = first_number & second_number;
	first_number = first_number ^ second_number;
   	second_number = carry << 1;
	
	
        carry = first_number & second_number;
	first_number = first_number ^ second_number;    /* the process is repeated untill the carry=0 at this point no further change in 
   	                                                   value will occur */ 
   	second_number = carry << 1;                                  
   	                                                                  

        carry = first_number & second_number;
	first_number = first_number ^ second_number;
   	second_number = carry << 1;

	
        carry = first_number & second_number;
	first_number = first_number ^ second_number;
   	second_number = carry << 1;

	
        carry = first_number & second_number;
	first_number = first_number ^ second_number;
   	second_number = carry << 1;
   	
   	
        carry = first_number & second_number;
	first_number = first_number ^ second_number;
   	second_number = carry << 1;
   	
   	
        carry = first_number & second_number;
	first_number = first_number ^ second_number;
   	second_number = carry << 1;
   	
   	
	cout<<"\n Sum ="<<first_number;
	

	return 0;

}
