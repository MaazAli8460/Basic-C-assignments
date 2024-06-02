#include<iostream>
using namespace std;
int main()
{
	cout<<"\n name: MAAZ Ali Roll no: 22i-1042"<<endl;
	int num1,num2,num3;
	cout<<"\nEnter num 1:";
	cin>>num1;
	cout<<"\nEnter num 2:";
	cin>>num2;
	cout<<"\nEnter num 3:";
	cin>>num3;
	
	if(num1>num2 && num1>num3)
	        {
	          if(num2>num3)
	          cout<<"desending order"<<num1<<num2<<num3;
	          
	          else
	          cout<<"desending order"<<num1<<num3<<num2;
	        
	        }
	        
	else if(num2>num1 && num2>num3)
	        {
	          if(num1>num3)
	          cout<<"desending order"<<num2<<num1<<num3;
	          
	          else
	          cout<<"desending order"<<num2<<num3<<num1;
	        
	        }
	        
        else
	        {
	          if(num1>num2)
	          cout<<"desending order"<<num3<<num1<<num2;
	          
	          else
	          cout<<"desending order"<<num3<<num2<<num1;
	        
	        }
	                        
        return 0;
        
        
        }
