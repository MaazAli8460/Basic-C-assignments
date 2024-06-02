/*Maaz Ali
  22i-1042
  Assignment#03*/



#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1,num2,num1odd,oddsum=0,evensum=0,a,b,temp=0;
    char ch1,ch2;
    
    cout<<"\nEnter first number:";
    cin>>num1;
    cout<<"\nEnter second number:";
    cin>>num2;
    while(num1==0 || num2==0)
    {
    cout<<"\nEnter first number:";
    cin>>num1;
    cout<<"\nEnter second number:";
    cin>>num2;
    
    }
    if(num1>num2)
    {
    	temp=num1;
    	num1=num2;
    	num2=temp;	
    
    }
    num1odd=num1+1;
    a=num1+1;
    b=1;
    ch1=num1;
    ch2=num2;
    cout<<"\nAll odd numbers between firstNum and secondNum:";
    while(num1odd<num2)
    {
        if(num1odd%2!=0)
        {
            cout<<num1odd<<",";
            oddsum=oddsum+pow(num1odd,2);
        }
                    num1odd++;

    }   
    cout<<"\nThe sum of the square of the odd numbers:"<<oddsum;
   
    while(a<num2)
    {
        if(a%2==0)
        evensum=evensum+a;
        
        a++;
    
    }
     cout<<"\nThe sum of all even numbers between firstNum and secondNum:"<<evensum<<endl;


    while(b<=10)
    {

            cout<<"Number="<<b;
            cout<<", square="<<pow(b,2)<<"\n";

        b++;
    
    }
    if((ch1>='A' && ch1<='Z') || (ch2>='A' && ch2<='Z') || ch2>'Z')
   	{
   		 while(ch1<=ch2)
    		{	
    			if(ch1>='A' && ch1<='Z')
        		cout<<ch1<<"   ";
        	
        		ch1++;
    		}
    		cout<<endl;
    		
    	}
     else
        {cout<<"\nThere is no upper case between first and second number...";
        }
        

    
    return 0;

}
