/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
using namespace std;
int main()
{
	int rent,units,inc,maint,total,red,count, temp;
	cout<<"\nEnter total units:";
	cin>>units;
	cout<<"\nEnter rent per unit:";
	cin>>rent;
	cout<<"\nEnter maintaninence cost:";
	cin>>maint;
	cout<<"\nEnter increase in rent that results in a vacant unit:";
	cin>>inc;
	
	while(units<=0 || rent<=0 || maint<=0 || inc<=0)
	{
	cout<<"\nWrong Input.....";
	cout<<"\nEnter total units:";
	cin>>units;
	cout<<"\nEnter rent per unit:";
	cin>>rent;
	cout<<"\nEnter maintaninence cost:";
	cin>>maint;
	cout<<"\nEnter increase in rent that results in a vacant unit:";
	cin>>inc;
	
	}
	if(units>0 && rent>0 && maint>0 && inc>0)
	{
	total=units*rent;
	total=total-(units*maint);
	
	for(int i=1;i<=units;i++)
	{
		units--;
		rent=rent+inc;
		
		red = units * rent -(units*maint) ;
	
		
		if(red>temp)
		temp = red;
		
		
		if(red < temp)
		{
		units++;
		rent = rent -inc;
		break;
		}
		
		
	}
	
	if(total>red)
	cout<<"\nTotal="<<total<<endl<<units<<endl<<rent;
	
	else
	cout<<"\nTotal="<<red<<" Total appartments rented :"<<units<<endl<<"Amount of rent="<<rent<<endl;
	}
	else
	cout<<"\nError....";
	return 0;
}
