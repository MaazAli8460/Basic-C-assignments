#include<iostream>
int ftn(int x);
using namespace std;
int main()
{
int j,n=10;
int arr[n]={5,8,7,9,6,10,12,11,13,14};
for(int i=0;i<n;i++)
{
j=ftn(n);
//cout<<j<<endl;
if(i==j)
break;
arr[i]+=arr[j];
arr[j]=arr[i]-arr[j];
arr[i]-=arr[j];

}
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";

}

return 0;
}
int ftn(int x)
{
static int i=0;
return x-(++i)-1;

}
