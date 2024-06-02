

//Maaz Ali, 22I-1042, assignment#01

#include<iostream>
using namespace std;
int main()
{
	int time;                                         //Initilization 
	
	cout<<"\n Enter a two_byte Time value :";
	cin>>time;
	
	
	int hours,minutes,seconds;                       //Initilization
	
	
	hours = time & 0b1111000000000000;              /*Here AND (&) operation with 16 bit binary will isolate the first four digits as per the  key                                             
                                                         for hours*/	                                                  
	hours = hours >> 12;                            //removes excess zeros after the first 4 digits of binary
	
	
	minutes = time & 0b0000111111000000;            /*Here AND (&) operation with 16 bit binary will isolate only 
	                                                 5th to 10 digits*/
	minutes = minutes >> 6;
	
	
	seconds = time & 0b0000000000111111;           //Here AND (&) operator will isolate  the last 6 digits
	seconds = seconds >> 0;
	
	cout<<"\n Time is "<<hours<<"hours "<<minutes<<"minutes "<<seconds<<"seconds."<<endl;
	


	return 0;

}
