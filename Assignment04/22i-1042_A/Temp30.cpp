/*
  Maaz Ali
  22i-1042
  Assignment#04
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
int hangman(int c);
using namespace std;
int main()
{
	srand(time(0));
	int x=100,temp=0,count=0,control=1,i=0;
	char word[x],word1[x],choice;
	bool flag,fl=true;

	char arr[x]={'p', 'a','r','i','s',',','a','l','i',',','f','a','s','t',',','c','o','d','e',',','u','r','d','u',',','p','r','o','p','h','e','t'};
	int position[6]={0,6,10,15,20,25};
	int pos,y;
	do
	{
	pos=0;
	y=0;
	pos=rand()%6;
	y=position[pos];
		for(y;y<x;y++)
		{
			
			if(arr[y]!=',' && arr[y]!='\0')
			{
				word[i]=arr[y];
				temp++;
				i++;
			}
			else
			break;

		
		}
	
	for(int k=6;k>=0;k--)
	{
	if(k==0)
	{
	cout<<"\nsorry you have lost...";
	hangman(k);
	break;
	}
	cout<<"\nNow you got "<<k<<" chances to guess the word or else you lose...";
	hangman(k);

	cin>>choice;
	count=0;
	temp=0;
	for(i=0;word[i]!='\0';i++)
	{
		if(word[i]==choice)
		{
			word1[i]=choice;
			count++;
		}
		temp++;
		
		if(word1[i]=='\0')
		cout<<'_';
		else
		cout<<word1[i];

	}
	if(count>0)
	{
		k++;
		cout<<"\nCorrect choice.";
	}
	else if(count==temp)
	{
		cout<<"\nCongrats you have won.";
		break;
	}
	else
	cout<<"\nWrong choice...";
	
	for(int b=0;word[b]!='\0';b++)
	{
	
	if(word1[b]!=word[b])
	{
		flag=false;
		break;
	}
	else
	{
		flag=true;
		continue;
	}
	}
	if(flag)
	{
		cout<<"\nCongrats you have won.";
		break;
	}
	else
	continue;
	}	
	
	for(i=0;i<x;i++)
	{
		word[i]='\0';
		word1[i]='\0';
	}
	i=0;
	cout<<"\nEnter 0 to quit. If you want to coontinue press any key from 1-9:";
	cin>>control;	
	}
	while(control!=0);
	
return 0;
}

int hangman(int c)
{
	switch(c)
	{
	case 6:
		cout<<"\n    +-----+"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"============="<<endl;
		break;
		
	case 5:
		cout<<"\n    +-----+"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"    0     |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"============="<<endl;
		break;
		
	case 4:
		cout<<"\n    +-----+"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"    0     |"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"============="<<endl;
		break;
		
	case 3:
		cout<<"\n    +-----+"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"    0     |"<<endl;
		cout<<"   /|     |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"============="<<endl;
		break;
		
	case 2:
		cout<<"\n    +-----+"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"    0     |"<<endl;
		cout<<"   /|\\    |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"============="<<endl;
		break;
		
	case 1:
		cout<<"\n    +-----+"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"    0     |"<<endl;
		cout<<"   /|\\    |"<<endl;
		cout<<"   /      |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"============="<<endl;
		break;
		
	case 0:
		cout<<"\n    +-----+"<<endl;
		cout<<"    |     |"<<endl;
		cout<<"    0     |"<<endl;
		cout<<"   /|\\    |"<<endl;
		cout<<"   / \\    |"<<endl;
		cout<<"          |"<<endl;
		cout<<"          |"<<endl;
		cout<<"============="<<endl;
		break;
		
	
	default:
	return 0;
	}

return 0;
}




