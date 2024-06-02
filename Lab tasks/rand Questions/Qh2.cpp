#include<iostream>
using namespace std;
int main()
{
	int i=1;
int NoOfStars=1;
int NoOfSpace=6;
int NumberOfLines=9,j,space;
while (i<=NumberOfLines){
j=1;
while (j<=NoOfStars){
if( i%2!=0)
cout<< "*"<<" ";
else
cout<< " "<<"*";
j+=1;
}
space=1;
while (space<=NoOfSpace){
cout<<" ";
space+=1;
}
if (i==(NumberOfLines/2)+1)
NoOfStars-=1;
j=1;
while (j<=NoOfStars){
if (i%2==0)
cout<<"*"<<" ";
else
cout<<" "<<"*";
j+=1;
}
if (i==(NumberOfLines/2)+1)
NoOfStars+=1;
cout<<endl;
if (i%2==0 && i<=(NumberOfLines/2)+1){
NoOfStars+=1;
NoOfSpace-=4;
}
else if (i%2!=0 && i>=(NumberOfLines/2)+1){
NoOfStars-=1;
NoOfSpace+=4;
}
i+=1;}



return 0;
}
