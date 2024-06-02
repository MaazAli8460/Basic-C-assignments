
//Maaz Ali, 22I-1042, assignment#01

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char window_style,grass_style;
	cout<<"\n Enter your window style for FAST main building:";
	cin>>window_style;
	cout<<"Enter your grass style for FAST main building:";
	cin>>grass_style;
	cout<<setw(9)<<"!"<<setw(33)<<"@"<<setw(33)<<"!"<<"\n"
	<<setw(10)<<"(*)"<<setw(34)<<"(***)"<<setw(32)<<"(*)"<<"\n"
	<<setw(11)<<"(***)"<<setw(35)<<"((*****))"<<setw(31)<<"(***)"<<"\n"
	<<setw(12)<<"|#|#|#|"<<setw(35)<<"((|#|#|#|))"<<setw(31)<<"|#|#|#|"<<"\n"
	<<setw(5)<<"/\\_"<<setw(6)<<"*****"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(13)<<"###########_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(7)<<"*****"<<setw(4)<<"_/\\"<<"\n"
	<<setw(3)<<"|"<<setw(4)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(4)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<"\n"
			<<setw(3)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"_"<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<setw(2)<<"="<<"\n"
			<<setw(3)<<"|"<<setw(5)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(6)<<"|"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(4)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<"\n"
			<<setw(3)<<"|"<<setw(5)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(6)<<"|"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(4)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<"\n"
			<<setw(3)<<"|"<<setw(5)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(2)<<"|"<<setw(2)<<"_|_"<<setw(2)<<"_"<<setw(5)<<"_|_|"<<setw(2)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(4)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<"\n"
			<<setw(3)<<"|"<<setw(5)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(6)<<"|"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(4)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<"\n"
			<<setw(3)<<"|"<<setw(5)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(5)<<"|_|_"<<setw(2)<<"_"<<setw(5)<<"_|_|"<<setw(2)<<"|"<<setw(3)<<window_style<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(3)<<window_style<<setw(4)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<"\n"
			<<setw(2)<<"/"<<setw(32)<<"/"<<setw(7)<<"_"<<setw(2)<<"_"<<setw(7)<<"\\"<<setw(32)<<"\\"<<"\n"<<"/"<<setw(5)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(6)<<"/"<<setw(8)<<"/_"<<setw(3)<<"_\\"<<setw(7)<<"\\"<<setw(6)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(3)<<grass_style<<setw(5)<<"\\"<<"\n";
	
	
	
	
	return 0;






}





