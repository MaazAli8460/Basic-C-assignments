/* Roll No: 22I-1042
   Name: Maaz Ali
   Assignment 02  */
   
   
#include<iostream>
using namespace std;
int main()
{
	int hardness,tensile;
	float carbon,temp=0.7;
	cout<<"\nEnter the hardness of steel:";
	cin>>hardness;
        
	cout<<"\nEnter the carbon content of steel:";
	cin>>carbon;
	
	cout<<"\nEnter the tesile strength of steel:";;
	cin>>tensile;
	
	
	if (hardness>50 && carbon<temp && tensile>5600)
		cout<<"\n It Is GRADE 10.\n";
	
	else if (hardness>50 && carbon<temp)
		cout<<"\n It Is GRADE 9.\n";
	
	else if (carbon<temp && tensile>5600)
		cout<<"\n It Is GRADE 8.\n";
	
	else if (hardness>50 && tensile>5600)
		cout<<"\n It Is GRADE 7.\n";
	
	else if (hardness>50 || carbon<temp || tensile>5600)
		cout<<"\n It Is GRADE 6.\n";
	
	else
		cout<<"\n It Is GRADE 5.\n";
	
	return 0;

}
