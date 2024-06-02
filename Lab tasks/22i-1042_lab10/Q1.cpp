#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int showchoice();

double problem02();

double feet1(double a, double b);

double meter1(int m,int c);

double problem03();

double evaluate(int x, int y, double pi=3.142, double epsilon=8.85418);

double evaluate(double x, double y, double pi=3.142, double epsilon=8.85418);

double problem04();

int factorial(int num);

int main()
{	
	cout<<"\nRoll no::22i-1042 \t Name::Maaz Ali\n";
	showchoice();

	return 0;
}

int showchoice()
{

	int choice;
	cout<<"\nPress 2 for problem02:";
	cout<<"\nPress 3 for problem03:";
	cout<<"\nPress 4 for problem04:"<<endl;
	cin>>choice;
		switch(choice)
	{
		case 2:
		problem02();
		break;
		
		case 3:
		problem03();
		break;
		
		case 4:
		problem04();
		break;
		
		default:
		cout<<"\nWrong Entry...";
	
	
	}


	return choice;
}

double problem02()
{
	double inches,feet,meter,centimeter;
	cout<<"\nEnter feet:";
	cin>>feet;
	cout<<"\nEnter inches:";
	cin>>inches;
	feet1(feet,inches);
	cout<<"\nEnter Meters:";
	cin>>meter;
	cout<<"\nEnter centimeter:";
	cin>>centimeter;
	meter1(meter,centimeter);
	
	return 0;

}

double feet1(double a,double b)
{
	double m,mtemp;
	double x,temp,te;
	mtemp = (a+(b/12.0))*0.3048;
	m = mtemp;
	temp = (mtemp*100) - 100;
	x= temp;
	te=temp/100;
	m-=te;

	cout<<"\nMeter="<<m;
	cout<<"\nCentimeter="<<x;
	
	return 0;
	
}

double meter1(int m,int c)
{
	double f,i;
	int x;
	m=m*100;
	c=m+c;
	i=c/2.54;
	f=i/12;
	x=int (i)%12;
	i=x;
	cout<<"\nfeet="<<int (f);
	cout<<"\ninch="<<i;
	
	return 0;
	
	
return 0;
}

double problem03()
{
	double f,pi,epsilon;
	double x,y;
	double r;
	cout<<"\nEnter R=";
	cin>>r;
	cout<<"\nEnter For Q1=";
	cin>>x;
	cout<<"\nEnter For Q2=";
	cin>>y;
	evaluate(x,y,pi=3.142,epsilon=8.85418);
	cout<<"\nWhen Q1 and Q2 are double F="<<setprecision(4)<<f;
	
	evaluate(int(x),int(y),pi=3.142,epsilon=8.85418);
	cout<<"\nwhen Q1 and Q2 are int F="<<setprecision(3)<<f;
	f=0;
	

	
	return 0;

}

double evaluate(int x, int y, double pi, double epsilon)
{
	double f;
	double r;
	cout<<"\nEnter R=";
	cin>>r;
	f=abs(x*y)/(4*pi*epsilon*(r*r));
	return f;
}

double evaluate(double x, double y, double pi, double epsilon)

{
	double f;
	double r;
	cout<<"\nEnter R=";
	cin>>r;
	f=abs(x*y)/(4*pi*epsilon*(r*r));
	return f;

}

double problem04()
{
	int x;
	int n,count=1;
	cout<<"\nEnter the value of X=";
	cin>>x;
	int sin=0;
	double sum=0;
	cout<<"\nEnter the value of N=";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	if(count%2!=0)
	{
		if(i%2!=0)
		{sin+=double(pow(x,i))/double (factorial(i));
		sum+=double(pow(x,i))/double (factorial(i));}
	}
	else //if(count%2==0)
	{
		//if(i%2!=0)
		{sin-=double(pow(x,i))/double (factorial(i));
		sum-=double(pow(x,i))/double (factorial(i));}
	}
	count++;
	
	}
	
	cout<<"\nsin("<<x<<")="<<sum<<endl;
	
	
	return 0;


	
	
	

}

int factorial(int num)
{
	int res=1;
	for(int k=1;k<=num;k++)
	res*=k;
	
	return res;	
}









































