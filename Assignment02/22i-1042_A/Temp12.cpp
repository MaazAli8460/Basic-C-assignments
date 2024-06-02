/* Roll No: 22I-1042
   Name: Maaz Ali
   Assignment 02  */
   
   
#include<iostream>
using namespace std;
int main()
{
	bool flag;
	int num1,num2;
	cout<<"\n Enter number 1:";
	cin>>num1;
	cout<<"\n Enter number 2:";
	cin>>num2;
	
	switch((num1>=1 && num1<=36) && (num2>=1 && num2<=36))
	{
	case 1:
		switch(num1)            //for green colour
		{
			case 1:
			case 6:
			case 7:
			case 12:
			case 17:
			case 20:
			case 28:
			case 33:
				switch(num2)
				{
				case 1:
				case 6:
				case 7:
				case 12:
				case 17:
				case 20:
				case 28:
				case 33:
					flag=true;
					break;
					
				}
				break;
				
			default:
				switch(num1) //for red colour
			{
				case 2:
				case 11:
				case 13:
				case 18:
				case 19:
				case 24:
				case 29:
				case 32:
					switch(num2)
					{
					case 2:
					case 11:
					case 13:
					case 18:
					case 19:
					case 24:
					case 29:
					case 32:
						flag=true;
						break;
				
					}
					break;
					
				default:
				switch(num1)  //for blue colour
				{
				case 3:
				case 10:
				case 14:
				case 23:
				case 25:
				case 30:
				case 31:
				case 36:
				switch(num2)
				{
					case 3:
					case 10:
					case 14:
					case 23:
					case 25:
					case 30:
					case 31:
					case 36:
					flag=true;
					break;
				
					default:
					flag=false;
					
				}
				break;
				
				default:
				switch(num1)  //for orange colour
					{
						case 4:
						case 9:
						case 15:
						case 22:
						case 26:
						case 35:
							switch(num2)
								{
								case 4:
								case 9:
								case 15:
								case 22:
								case 26:
								case 35:
									flag=true;
									break;
				
								default:
									flag=false;
					
					}
					break;
				
						default:
						switch(num1)  //for grey colour
						{
							case 5:
							case 8:
							case 16:
							case 21:
							case 27:
							case 34:
								switch(num2)
									{
									case 5:
									case 8:
									case 16:
									case 21:
									case 27:
									case 34:
										flag=true;
										break;
				
									default:
										flag=false;
					
						}
						break;
				
						default:
						flag=false;
						}
					}
				}
			}
		
				
			
		}
		break; 
		
	default:
	cout<<"\nWrong input....";
	}
	
	if(flag==true)
	cout<<"\nBoth are of same colour.";
	
	else
	cout<<"\nBoth are not of the same colour.";
	
	
	
	return 0;
	
}
