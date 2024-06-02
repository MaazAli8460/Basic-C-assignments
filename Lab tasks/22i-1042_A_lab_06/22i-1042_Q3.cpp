#include<iostream>
using namespace std;
int main()
{
	cout<<"\n name: MAAZ Ali Roll no: 22i-1042"<<endl;
	double temp;
	cout<<"\nEnter the temperature in centegrade:";
	cin>>temp;
	
	if(temp<0)
	cout<<"\nThe weather is freezing.";
	
	else if(temp>=0 && temp<10)
	cout<<"\n The weather is very cold.";

        else if(temp>=10 && temp<20)
	cout<<"\n The weather is cold.";

        else if(temp>=20 && temp<30)
	cout<<"\n The weather is normal.";

        else if(temp>=30 && temp<40)
	cout<<"\n The weather is hot.";

        else
        cout<<"\n The weather is very Hot.";
        



	return 0;
}
