/* Roll No: 22I-1042
   Name: Maaz Ali
   Assignment 02  */
   
   


#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	int date,enclosure,family,seats,choice,s;  //S IS FOR SEATS. 
	float x,adults,amount,child;                //X IS FOR PRICE OF SEAT IN ENCLOSURE.
	long long int cnic;
	string y;				   //Y IS FOR NAME OF THE ENCLOSURE.


	cout<<"\n1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium\n(7pm-10.15pm)";
	cout<<"\n2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium\n(8pm-11.15pm)";
	cout<<"\n3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium\n(7pm-10.15pm)";
	cout<<"\n4. 1 Mar 2020 – Islamabad United v Karachi Kings, Pindi Cricket Stadium\n(7pm-10.15pm)";
	cout<<"\n5. 2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium\n(7pm-10.15pm)";
	cout<<"\n6. 5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium\n(7pm-10.15pm)";
	cout<<"\n7. 7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium\n(2pm-5.15pm)";
	cout<<"\n8. 8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium\n(2pm-5.15pm)";
	cout<<"\nEnter your choice from (1-8):"; 
	cin>>date;
	
	switch(date)
	{
	case 1:
		cout<<"\nVIP enclosure price for 27 Feb match is Rs 3000.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t Available seats:\n"<<rand()%1001;
		cout<<"\nPREMIUM enclosure price for 27 Feb match is Rs 1500.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t Available seats:"<<rand()%3000+1<<endl;
		cout<<"\nFIRST CLASS enclosure price for 27 Feb match is Rs 1000.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS. Available seats:"<<rand()%3000+1<<endl;
		cout<<"\nGENERAL enclosure price for 27 Feb match is Rs 500.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=3000;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=3000;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=3000;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=3000;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1500;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=1000;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=500;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=500;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1(without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && (child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;

					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;

					}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	case 2:
		cout<<"\nVIP enclosure price for 28 Feb match is Rs 3000.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t Available seats:"<<rand()%1001;
		cout<<"\n\nPREMIUM enclosure price for 28 Feb match is Rs 1500.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t Available seats:"<<rand()%3001;
		cout<<"\n\nFIRST CLASS enclosure price for 28 Feb match is Rs 1000.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS.\t Available seats:"<<rand()%3001;
		cout<<"\n\nGENERAL enclosure price for 28 Feb match is Rs 500.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=3000;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=3000;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=3000;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=3000;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1500;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=1000;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=500;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=500;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1(without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && (child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;

					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
		}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	case 3:
		cout<<"\nVIP enclosure price for 29 Feb match is Rs 3000.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\n\nPREMIUM enclosure price for match is Rs 1500.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\n\nFIRST CLASS enclosure price for match is Rs 1000.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\n\nGENERAL enclosure price for match is Rs 500.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=3000;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=3000;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=3000;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=3000;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1500;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=1000;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=500;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=500;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1(without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && (child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;

					}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	case 4:
		cout<<"\nVIP enclosure price for 1 march match is Rs 2000.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nPREMIUM enclosure price for  match is Rs 1000.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nFIRST CLASS enclosure price for  match is Rs 500.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nGENERAL enclosure price for match is Rs 250.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=2000;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=2000;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=2000;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=2000;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1000;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=500;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=250;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=250;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1 (without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && (child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;

					}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	case 5:
		cout<<"\nVIP enclosure price for 2 march match is Rs 1500.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nPREMIUM enclosure price for  match is Rs 1000.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nFIRST CLASS enclosure price for  match is Rs 500.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nGENERAL enclosure price for  match is Rs 250.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=1500;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=1500;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=1500;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=1500;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1000;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=500;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=250;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=250;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1 (without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && (child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	case 6:
		cout<<"\nVIP enclosure price for 5 march match is Rs 1500.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nPREMIUM enclosure price for  match is Rs 1000.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nFIRST CLASS enclosure price for  match is Rs 500.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nGENERAL enclosure price for  match is Rs 250.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=1500;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=1500;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=1500;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=1500;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1000;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=500;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=250;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=250;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1 (without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && (child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	case 7:
		cout<<"\nVIP enclosure price for 7 march match is Rs 2000.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nPREMIUM enclosure price for match is Rs 1000.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nFIRST CLASS enclosure price for match is Rs 500.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nGENERAL enclosure price for match is Rs 250.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=2000;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=2000;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=2000;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=2000;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1000;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=500;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=250;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=250;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1 (without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && (child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	case 8:
		cout<<"\nVIP enclosure price for 8 march match is Rs 1500.";
		cout<<"\nVip enclosure :1. JAVED AKHTER :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :2. AZHAR MEHMOOD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :3. IMRAN KHAN :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nVip enclosure :4. JAVED MIANDAD :MAX 1000 SEATS.\t\t Available seats:"<<rand()%1001;
		cout<<"\nPREMIUM enclosure price for match is Rs 1000.";
		cout<<"\nPremium enclosure :5. SHOAIB AKHTAR :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nFIRST CLASS enclosure price for match is Rs 500.";
		cout<<"\nFirst class enclosure :6. SOHAIL TANVEER :MAX 3000 SEATS.\t\t Available seats:"<<rand()%3001;
		cout<<"\nGENERAL enclosure price for match is Rs 250.";
		cout<<"\nGeneral enclosure :7. IMRAN BUKSH :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nGeneral enclosure :8. YASIR ARAFAT :MAX 2500 SEATS.\t\t Available seats:"<<rand()%2501;
		cout<<"\nSelect the enclosure you want the seat in (1-8):";
		cin>>enclosure;  
		switch(enclosure)
		{
		case 1:
			x=1500;
			s=1000;
			y="JAVED AKHTER";
			break;
			
		case 2:
			x=1500;
			s=1000;
			y="AZHAR MEHMOOD";
			break;
			
		case 3:
			x=1500;
			s=1000;
			y="IMRAN KHAN";
			break;
			
		case 4:
			x=1500;
			s=1000;
			y="JAVED MIANDAD";
			break;
			
		case 5:
			x=1000;
			s=3000;
			y="SHOAIB AKHTAR";
			break;
			
		case 6:
			x=500;
			s=3000;
			y="SOHAIL TANVEER";
			break;
			
		case 7:
			x=250;
			s=2500;
			y="IMRAN BUKSH";
			break;
			
		case 8:
			x=250;
			s=2500;
			y="YASIR ARAFAT";
			break;
			
		
			
		default:
			{cout<<"\nWrong entry....";
			return 0;}
		}
		cout<<"\nEnter your 13 digit Cnic starting with 1(without the dash-):";
		cin>>cnic;
		if(cnic>1000000000000)
		{
			cout<<"\nDo you want seats for \n1. Family:  \n2. Adults:\n::";
			cin>>choice;
			if(choice==1)
				{
					cout<<"\nEnter the number of adults (ATLEAST 1):";
					cin>>adults;
					cout<<"\nEnter the number of children (must be greater by 1 than adults entered):";
					cin>>child;
					if((adults>0 && adults<=4) && ( child>0 && child<=5))
					{
						amount=adults*(x-(double(10.0/100)*x)) + child*(x-(double(20.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
					cout<<"\nWrong Entry....";	
				}
			else if(choice==2)
				{
					cout<<"\nEnter the number of adults(max 8):";
					cin>>adults;
					if(adults>0 && adults<=8)
					{
						amount=adults*(x-(double(10.0/100)*x));
						cout<<"\nCNIC:"<<cnic<<"\tTOTAL AMOUNT:"<<amount;
					}
					else
						cout<<"\nWrong Entry....";	
				}
			else
				cout<<"\nWrong Input....";
				
		}
		else
			cout<<"\nWrong Cnic....";
			
	break;
	
	default:
	cout<<"\nWrong Entry....";
	return 0;
	
	}
	
	return 0;
	
}
