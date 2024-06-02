#include<iostream>
using namespace std;
int main()
{
	int k,j;
	cout<<"Enter the Number"<<endl;// enter 10
	cin>>k;
	int z=0,i=1;
	while (i <= k){
		z=z+i;
		i=i+1;
		}
	while (k >=1){
	j=1;
	while (j <= k){
	cout<<z-k+j<<" ";
	j=j+1;
	}
	z=z-k;
	cout<<endl;
	k=k-1;
	}


return 0;
}
