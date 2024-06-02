/*
  Maaz Ali
  22i-1042
  Assignment#04
*/

#include<iostream>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int abs(int a);
using namespace std;
int main()
{
	char op;
	int num1,num2,result;
	cout<<" __________________________"<<endl;
	cout<<"|For Addition       press +|"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"|For Subtraction    Press -|"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"|For Multiplication Press *|"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"|For Absolute value Press ~|"<<endl;
	cout<<"|__________________________|"<<endl;
	cout<<"Enter the operator:";
	cin>>op;
	
	switch(op)
	{
	
	case '+':
		cout<<"\nEnter first  number:";
		cin>>num1;
		cout<<"\nEnter second number:";
		cin>>num2;
		result=add(num1,num2);
		cout<<num1<<" + "<<num2<<" = "<<result<<endl;
		break;
		
	case '-':
		cout<<"\nEnter first  number:";
		cin>>num1;
		cout<<"\nEnter second number:";
		cin>>num2;
		result=sub(num1,num2);
		cout<<num1<<" - "<<num2<<" = "<<result<<endl;
		break;
		
	case '*':
		cout<<"\nEnter first  number:";
		cin>>num1;
		cout<<"\nEnter second number:";
		cin>>num2;
		result=mul(num1,num2);
		cout<<num1<<" * "<<num2<<" = "<<result<<endl;
		break;
		
	case '~':
		cout<<"\nEnter first  number:";
		cin>>num1;
		result=abs(num1);
		cout<<" ~ "<<num1<<" = "<<result<<endl;
		break;

	
	default:
		cout<<"\nWrong choice select from Menu......";
	}
	
	return 0;
}

int add(int a,int b)
{
	int output;
	if(a>=0 && b>=0)
	{
		for(int i=1;i<=a;i++)
			b++;
		output=b;
	}
	else if(a<0 && b<0)
	{
		for(int i=a;i<0;i++)
			b--;
		output=b;
	}
	else if(a<0 && b>0)
	{
		for(int i=a;i<0;i++)
			b--;
		output=b;
	}
	else if(a>0 && b<0)
	{
		for(int i=b;i<0;i++)
			a--;
		output=a;
	}
	
	return output;

}
int sub(int a,int b)
{
	int output;
	if(a==b && (a>0 && b>0))
	return 0;
	/*else if(a>0 && b<0)
	{
		for(int i=a;i<0;i++)
			b--;
		output=b;
	
	}*/
	else if((a>b) && (a>0 && b>0))
	{
		for(int i=1;i<=b;i++)
		a--;
		output=a;
	}
	else if((b>a) && (a>0 && b>0))
	{
		for(int i=1;i<=a;i++)
		b--;
		output=b;
	}
	else if(a<0 && b<0)
	{
		for(int i=a;i<0;i++)
			b++;
		output=b;
	}
	else if(a<0 && b>0)
	{
		for(int i=a;i<0;i++)
			b--;
		output=b;
	}
	else if(a>0 && b<0)
	{
		for(int i=b;i<0;i++)
			a++;
		output=a;
	}
	
	
	return output;
}

int mul(int a,int b)
{
	int output=0,temp;
	if(a==0 || b==0)
	{
		output=0;
		return output;
	}
	else if((a<0 && b<0) || (a>0 && b>0))
	{
		a=abs(a);
		b=abs(b);
		temp=b;
		for(int i=1;i<a;i++)
		{
			for(int j=0;j<temp;j++)
				b++;
		}
		output=b;
	}
	else if(a<0)
	{
		temp=b;
		++a;
		for(int i=a;i<0;i++)
		{
			for(int j=1;j<=temp;j++)
				b++;
		}
		for(int i=b;i>0;i--)
			output--;
	}
	else if(b<0)
	{
		temp=a;
		++b;
		for(int i=b;i<0;i++)
		{
			for(int j=1;j<=temp;j++)
				a++;
		}
		for(int i=a;i>0;i--)
			output--;
	
	}
	
	
	return output;
}
int abs(int a)
{
	int output;
	if(a<0)
	{
		for(int i=a;i>0;i--)
			output++;
		return output;
	}
	
	return a;
}




















