#include<iostream>
using namespace std;
int main()
{
	int height,mid,r,c;

cout<<"Enter an odd integer as the height";
cin>>height;
if ((height<= 0) || ((height %2) == 0)){
cout<<"Invalid Height"<<endl;
}
else{
mid=height/2+1;
r=mid;
while (r>=1){
c=1;
while (c<=height){
if(c==r || c==(height+1-r))
cout<<'*';
else
cout<<' ';
c+=1;
}
cout<<'\n';
r-=1;
}
r=2;
while (r<=mid){
c=1;
while (c<=height){
if (c==r || c==(height+1-r))
cout<<'*';
else
cout<<' ';
c+=1;
}
cout<<'\n';
r+=1;
}
}


return 0;
}
