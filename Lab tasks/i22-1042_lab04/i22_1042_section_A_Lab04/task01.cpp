#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	float total_marks,obtained_marks,percent;
	cout<<"\n Enter your total marks in fsc:";
	cin>>total_marks;
	cout<<"\n Enter your obtained marks in fsc:";
	cin>>obtained_marks;
	percent=(obtained_marks/total_marks)*100;
	cout<<"\n your percent="<<percent<<"\n";




	return 0;
}
