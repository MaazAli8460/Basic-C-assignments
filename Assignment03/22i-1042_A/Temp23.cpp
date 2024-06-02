/*Maaz Ali
  22i-1042
  Assignment#03*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
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
 
 	 cout<<"\n Pattren 2"<<endl;
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
            
           
	   int height, number,cons;
 	   cout<<"\nEnter height:";
	   cin>>height;
 	   cout<<"\nEnter number of pyramid:";
 	   cin>>number;
 	    while(height<=0 || number<=0)
		{
			cout<<"\nWrong input....";
			cout<<"\nEnter height:";
	 		cin>>height;
 	 		cout<<"\nEnter number of pyramid:";
 	  		cin>>number;
	
		}
 	   int spaces = height - 1;
	
 	   for (int i = 0; i < height; i++) 
 	   {
        	for (int j = 0; j < number; j++) 
        	{
        	    // first half of pyramid
        	    for (int  i = 0; i < spaces; i++) 
        	        cout << " ";
        	    
        	    for (int j = spaces; j < height; j++) 
        	        cout << "*";
        	    
        	    // second half of pyramid
        	    for (int k = spaces; k < height - 1; k++) 
        	        cout << "*";
        	    
        	    for (int l = 0; l < spaces; l++) 
        	        cout << " ";
        	   
        	}
        	cout << endl;
        	spaces--;
  	  }

	
	cout<<"\n Pattren 4";
        cout<<"\nEnter height of pyramid:";
        cin>>height;
        cout<<"\nEnter number of pyramid:";
        cin>>number;
         while(height<=0 || number<=0)
		{
			cout<<"\nWrong input....";
			cout<<"\nEnter height:";
	 		cin>>height;
 	 		cout<<"\nEnter number of pyramid:";
 	  		cin>>number;
	
		}
        cons = space;
	for( k=1;k<=number;k++)
	
	{
		for (i = 1; i<=height; i++)
            {
                for (j = i; j<height; j++)
                    cout<<" ";
                 
                 j = 1; 
                while (j <= (2 * i - 1))
                {
                    if (i == height || j == 1 || j == (2 * i - 1))
                        cout<<"*";
                    
                    else
                        cout<<" ";
                        
                    j++;
                }
                cout<<endl;
            }

	}

	return 0;
}
