#include<iostream>
using namespace std;
int main()
{
	int rooms,floors,empty=0,occupied=0,percent;

	cout<<"Enter the number of floors :"<<endl;
	cin>>floors;

	if(floors>1)
	{
		for(int i=0;i<=floors;i++)
		{
			
			if(i!=13)
			{
			
				cout<<"Enter the number of rooms on floor :"<<i<<endl;
				cin>>rooms;
			}
			if(rooms>10)
			{
				cout<<"Enter the occupied rooms :"<<endl;
			        cin>>occupied;
			        
			        rooms=rooms+rooms;
			        occupied=rooms-occupied;
			        empty=rooms%occupied;
			        percent=occupied/rooms;
			        
			}
			
		}
	}
	cout<<"Rooms are :"<<rooms<<endl;
        cout<<"occupied is :"<<occupied<<endl;
        cout<<"empty is :"<<empty<<endl;
	cout<<"Percent is:"<<(double)((occupied)/rooms)*100<<endl;
	return 0;
}
