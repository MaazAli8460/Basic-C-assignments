/*Maaz Ali
  22i-1042
  Assignment#03*/



#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int locker,open=0;
    cout<<"\nEnter number of lockers:";
    cin>>locker;
    
    while(locker<=0)
    {
    cout<<"Wrong input enter again...."<<endl;
    cin>>locker;
    }
    if(locker>0)
    {
      for(int i=1;i<=locker;i++)        //for this series only the perfect square lockers are open
        {
                int locker_number_open=i*i;
                if(locker_number_open<=locker)  //for ever perfect square locker is open the count will increment by 1
                open++;
                else                            //when the locker number open exceds the locker the loop will break.
                break;
        }
          
    	cout<<"open lockers="<<open;
    }   
    
    return 0;
                
}
