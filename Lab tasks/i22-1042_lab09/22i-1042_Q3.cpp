#include <iostream>
using namespace std;
int main()
{
	cout<<"\nMaaz Ali \tRoll no:22i-1042";
	int x,space,i,j,k;
	cout<<"Enter the number:";
	cin>>x;
	
	while(x<=0)
	{
	cout<<"\nWrong input....";
	cout<<"Enter the number:";
	cin>>x;
	
	}
	int y=x-1;
	space = y;
 
 	 cout<<endl;
            for (i = 0; i<=y; i++)
            {
 
 		 for (j = 0; j <=i; j++)
                    cout<<"*";
                
                for (j = 0; j <=space; j++)
                    cout<<"  ";
 
 		 for (j = 0; j <= i; j++)
                    cout<<"*";

                cout<<endl;
                space -= 1;
            }
            
            space=3;
           for (i = y; i >=0; i--)
            {

                for (j = 1; j <=i; j++)
                    cout<<"*";
                
                for (j = 0; j <=space; j++)
                    cout<<" ";

 
                for (j = 1; j <=i; j++)
                    cout<<"*";
 
                cout<<endl;
                space +=2;
            }
	return 0;
	
}
