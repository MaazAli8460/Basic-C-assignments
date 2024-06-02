/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float const pi=3.14;
int main()
{
	float radius,rcone,sector,angle,ccircle,ccone,volume,fvolume=0,large=1;
	cout<<"\nEnter the radius of circle:";
	cin>>radius;
	while(radius<=0)
	{
	cout<<"\nWrong input Enter the radius of circle again:";
	cin>>radius;
	
	}
	for(angle=6.28;angle>=0.01;)	
	{
		sector=radius*angle;
		ccircle=2*pi*radius;
		ccone=ccircle-sector;
		rcone=ccone/(2*pi);
		volume=(pi*pow(rcone,2))*(radius/3);
		
		if(volume>fvolume)
		fvolume=volume;
		
		if(sector<large)
		large=sector;
		
		angle=angle-0.01;
		
	}
	cout<<"Total volume of cone:"<<setprecision(4)<<fvolume<<endl;
	cout<<"Length of sector to be reduced:"<<setprecision(2)<<large;
	

	return 0;
	
}
