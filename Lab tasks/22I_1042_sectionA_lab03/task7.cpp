#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int var_1;
int var_2;
cout<<"\n Enter a number:";
cin>>var_1;
cout<<"\n Enter second number:";
cin>>var_2;
cout<<setw(5)<<var_1<<"\n";
cout<<setw(4)<<var_1<<setw(2)<<var_2<<"\n";
cout<<setw(3)<<var_1<<setw(4)<<var_2<<"\n";
cout<<setw(2)<<var_1<<setw(6)<<var_2<<"\n";
cout<<setw(1)<<var_1<<setw(8)<<var_2<<"\n";
cout<<setw(2)<<var_1<<setw(6)<<var_2<<"\n";
cout<<setw(3)<<var_1<<setw(4)<<var_2<<"\n";
cout<<setw(4)<<var_1<<setw(2)<<var_2<<"\n";
cout<<setw(5)<<var_1<<"\n";





return 0;
}
