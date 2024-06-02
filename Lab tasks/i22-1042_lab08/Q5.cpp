#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	char choice;
	cout<<"\nWelcome to rock(r) paper(p) scissor(s) game..\nEnter your choice:";
	cin>>choice;
	int val=1,cchoice=0,count=3;
	srand(time(0));
	while(count>= 0)
	{
	if(choice=='r')
	val=1;
	else if(choice=='p')
	val=2;
	else if(choice=='s')
	val=3;
	while(cchoice==0)
	{
	cchoice=rand()%4;
	}
	switch(val)
	{case 1:
		if(val==cchoice)
		cout<<"\ntie";
	
		else if(cchoice==2)
		cout<<"\nyou lose...";
		
		else
		cout<<"\nyou win this round..";
		break;
		
		
	case 2:
		if(val==cchoice)
		cout<<"\ntie";
	
		else if(cchoice==3)
		cout<<"\nyou lose...";
		
		else
		cout<<"\nyou win this round..";
		break;
		
	case 3:
		if(val==cchoice)
		cout<<"\ntie";
	
		else if(cchoice==1)
		cout<<"\nyou lose...";
		
		else
		cout<<"\nyou win this round..";
		break;
		
	}
	cout<<"\nYou have :: "<<count<<" ::tries left..";
	count--;
	cout<<"\nEnter your choice:";
	cin>>choice;
	}
	
return 0;	
}
