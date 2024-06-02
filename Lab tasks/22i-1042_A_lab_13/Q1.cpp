#include<iostream>
#include<string>
using namespace std;
int SearchingItem(int &arr[2][2][2] , int p, int r, int c,int x);




int main()
{
	int P=2,R=2,C=2,X;
	int arr[P][R][C]={{{1,2},{3,4}},{{5,6},{7,8}}};
	cout<<"\nEnter the char to search";
	cin>>X;
	SearchingItem (&arr[2][2][2], P, R, C, X);

	return 0;
}

int SearchingItem(int &arr[2][2][2], int p, int r, int c, int x)
{
	bool flag=false;
	for(int i=0;i<p;i++)
		{
		for(int j=0;j<r;j++)
			{
				for(int k=0;k<c;k++)
					{
						if(arr[i][j][k]==x)
						{
							cout<<"\nFound:AT:page:"<<i<<":row:"<<j<<":col:"<<k;
							flag=true;
							break;
						}
						
					
					
					}
			
						if(flag)
						break;
			
			}
		
		if(flag)
		break;
		
		}
return 0;

}
