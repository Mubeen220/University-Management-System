#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void portal();
void cafe();
char numbers[10];   
void game();
void board(); //function declaration for board.
int checkwin(); //function declaration for wining in board game	
int no_guess(); //function declaration for no_guessing game.
void enter_marksA();
void enter_marksB();
void enter_marksC();
void enter_marksD();
void check_marksA();
void check_marksB();
void check_marksC();
void check_marksD();
void student(int);
int Refreshment();
int desi();
int fast();
int deal();
int rollnum[200];
string x;
int main()
{
	cout<<"		mubeen 		abdullah	salahuddin\	husnain";
	cout<<"\t\t\t#################################################"<<endl;
	cout<<"\t\t\t## Welcome To Air University Management System ##"<<endl;
	cout<<"\t\t\t#################################################"<<endl;
	int decide;
	char condition;
do{
	cout<<"* Press 1 For AU Portal : \n";
	cout<<"* Press 2 For Cafe : \n";
	cout<<"* Press 3 For Game : \n";
	cin>>decide;
	switch (decide)
{
	case 1:
	portal ();
	break;
	case 2:
	cafe ();	
	break;
	case 3:
	game ();
	break;
	default :
	cout<<"Invalid input\n";
}
	cout<<"Press y to start again this Program ? :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	return 0;
}

// function 1 ( portal )

void  portal()
{
	char condition;
	int decide,roll_no;
	string pass,user;
	do{
	cout<<"Welcome To AU Portal"<<endl;
	
	


	
do{

	cout<<" Administration \n";	
	cout<<"Enter your name : ";
	cin>>user;
	cout<<"Enter your Password : ";
	cin>>pass;
	if (user=="farooq"&&pass == "0000")	// id , pass
	{
	cout<<"Welcome "<<user<<" !"<<endl;
	cout<<"Do you want to Enter Marks ? Press \"1\"\n";
	cout<<"Do you want to Check Marks ? Press \"2\"\n";	
	cin>>decide;
	switch (decide)						// switch for marks
	{
do{
	case 1:
	do
{	char section;
	cout<<"Which section marks do you want to enter (A,B,C,D) ? : ";
	cin>>section;
	switch(section)
{
	do
{
	case 'A':
	case 'a':
	enter_marksA();	
	break;	
	case 'B':
	case 'b':
	enter_marksB();	
	break;	
	case 'C':
	case 'c':
	enter_marksC();	
	break;	
	case 'D':
	case 'd':
	enter_marksD();	
	break;	
	default:
	cout<<"Invalid Input \n";
	cout<<"Do You want to Enter again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
}
cout<<"Do you want to enter another section marks ? Press y :";
cin>>condition;
}while(condition=='Y'||condition=='y');
	break;
	case 2:
do
{	char section;
cout<<"Which section marks do you want to check (A,B,C,D) ? : ";
	cin>>section;
switch (section)
{	
do{
	case 'A':
	case 'a':
	check_marksA();
	break;	
	case 'B':
	case 'b':
	check_marksB();
	break;	
	case 'C':
	case 'c':
	check_marksC();	
	break;	
	case 'D':
	case 'd':
	check_marksD();	
	break;	
	default:
	cout<<"Invalid Input \n";
	cout<<"Do You want to Try it again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
}
cout<<"Do you want to Check another section marks ? Press y :";
cin>>condition;
}while(condition=='Y'||condition=='y');
	break;
	default :
	cout<<"Invalid input\n";
cout<<"Do You want to Try Again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	}
	}
	else
	{
	cout<<"Wrong user name or Password \n";
	}
	cout<<"Do You want to Enter Marks again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	break;	
	
	
	

	

}while(condition=='Y'||condition=='y');
}


void cafe()			// cafe
{
	int option,bill,total=0;	
	char condition;
do{
	cout<<"\t \t ####################"<<endl;
	cout<<"\t \t ||Cafe Management ||" <<endl;
	cout<<"\t \t ####################"<<endl<<endl;
	cout<<" * Press 1 for Refreshment \n";
	cout<<" * Press 2 for Desi food \n";
	cout<<" * Press 3 for Fast food \n";
	cout<<" * Press 4 for Deals \n";
	cin>>option;
switch (option)
{
case 1:
bill=Refreshment();	
break;
case 2:
bill=desi();		
break;
case 3:
bill=fast();	
break;
case 4:
bill=deal();
break;
default:
cout<<"Wrong Input \n";
}
total=bill+total;
cout<<"Press y to buy another food : ";
cin>>condition;
}while(condition=='y'||condition=='Y');
cout<<"Your Total bill = "<<total<<endl;
}
int deal()
{
	char condition;
	int option,bill,total=0;
do{    
    cout<<"------------------------"<<endl;
    cout<<"----------DEALS----------"<<endl;
    cout<<"------------------------"<<endl<<endl;
	cout<<"* Deal 1 :\n\t chicken baryani + regular drink of your choice \n";
	cout<<"* Deal 2 :\n\t zinger burgar + regular drink + french fries \n";
	cout<<"* Deal 3 :\n\t pasta + soft drink can \n";
	cout<<"* Deal 4 :\n\t chicken corma + nan + drink + ice cream \n ";
	cout<<"> Enter the number of deal \n ";
	cin>>option;
	switch(option)
	{
	case 1:
	bill=800;
	break;
	case 2:
	bill=650;
	break;
	case 3:
	bill=700;
	break;
	case 4:
	bill=850;
	break;
	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<" Press Y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}
int Refreshment()
{	
	char condition;
	int option,bill,total=0;
do{
	cout<<"\t\t----------------------------------"<<endl;
    cout<<"\t\t*********REFRESHMENT MENU*********"<<endl;
    cout<<"\t\t----------------------------------"<<endl<<endl;
	cout<<"* press 1 for Green Tea\n";
	cout<<"* press 2 for Ice Creams\n";
	cout<<"* press 3 for Cold Coffee\n";
	cout<<"* press 4 for Cold Drinks (coke\\sprite\\fanta)\n";
	cout<<"* press 5 for Fresh juice(peach\\apple\\mango)\n";
	cin>>option;	
		switch(option)
	{
		case 1:
		bill=300 ;break;
		case 2:
		bill= 100 ;break;
		case 3:
		bill= 400 ;break;
		case 4:
		bill= 400 ;break;
		case 5:
		bill= 120 ;break;
	  	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<" Press Y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}	
int desi()
{	
	char condition;
	int option,bill,total=0;
	
do{		
    cout<<"\t**********************************"<<endl;
    cout<<"\t----------DESI FOOD MENU----------"<<endl;
    cout<<"\t**********************************"<<endl<<endl;
	cout<<"*press 1 for Chicken Handi\n";
	cout<<"*press 2 for Pulao\n";
	cout<<"*press 3 for Beef Kabab\n";
	cout<<"*press 4 for Chicken kabab \n ";
	cout<<"*press 5 for Fish Tikka \n";
	cin>>option;
	switch(option)
	{
	case 1:
	bill=1000;	break;
	case 2:
	bill=500 ;break;
	case 3:
	bill=1000;break;
	case 4:
	bill=220;break;
	case 5:
	bill=300;break;		
  	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<" Press Y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}	
int fast()
{
	char condition;
	int option,bill,total=0;
do{		
    cout<<"++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"----------FAST FOOD MENU----------"<<endl;
    cout<<"++++++++++++++++++++++++++++++++++"<<endl<<endl;
	cout<<"*press 1 for Zinger Burger\n";
	cout<<"*press 2 for Pizza\n";
	cout<<"*press 3 for Fries\n";
	cout<<"*press 4 for Pratha Roll\n  ";
	cout<<"*press 5 for Sandwich\n ";
	cin>>option;
		switch(option)
	{
		case 1:
		bill=400;break;
		case 2:
		bill=200;break;
		case 3:
		bill=200;break;
		case 4:
		bill=220;break;
		case 5:
		bill=300;break;			
	  	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<"Press Y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}
void enter_marksA()
{
	fstream fout;
	fout.open("mts-a.csv", ios::out);
	int size;
	cout<<"Enter number of students in A section : ";
	cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
}
void enter_marksB()
{
	fstream fout;
	fout.open("B-section.csv", ios::out);
	int size;
	cout<<"Enter number of students in B section : ";
		cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }


}
void enter_marksC()
{
fstream fout;
	fout.open("test2.csv", ios::out);
	int size;
	cout<<"Enter number of students in C section : ";
	cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
	
}
void enter_marksD()
{
fstream fout;
	fout.open("D-section.csv", ios::out);
	int size;
	cout<<"Enter number of students in D section : ";
	cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
	
}
void check_marksA()
{

  
int size=42;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],lab12perf[size],
lab13perf[size],lab14perf[size];
float lab1rep[size],lab2rep[size],lab3rep[size],lab4rep[size],lab5rep[size];
float mid[size];

   
string line;
ifstream file3("MTSA-CP-GRADES.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
   
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab7perf[i];
	 getline(iss, rand, ',');
    iss >>  lab8perf[i];
	 getline(iss, rand, ',');
    iss >>  lab9perf[i];
	 getline(iss, rand, ',');
    iss >>  lab10perf[i];
	 getline(iss, rand, ',');
    iss >>  lab11perf[i];
	 getline(iss, rand, ',');
    iss >>  lab12perf[i];
	 getline(iss, rand, ',');
    iss >>  lab13perf[i];
	 getline(iss, rand, ',');
    iss >>  lab14perf[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++; 
}

for(int i=0;i<size;i++)
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)
<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)
<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)
<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)
<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)
<<lab14perf[i]<<setw(12)<<mid[i]<<endl;
}
void check_marksB()
{
  
int size=35;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],
lab12perf[size],lab13perf[size],lab14perf[size],lab15perf[size];

float mid[size];

   
string line;
ifstream file4("MTSB-CP-GRADES.csv");
int i=0;
while (getline(file4, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab7perf[i];
	 getline(iss, rand, ',');
    iss >>  lab8perf[i];
	 getline(iss, rand, ',');
    iss >>  lab9perf[i];
	getline(iss, rand, ',');
    iss >>  lab10perf[i];
	 getline(iss, rand, ',');
    iss >>  lab11perf[i];
	 getline(iss, rand, ',');
    iss >>  lab12perf[i];
	 getline(iss, rand, ',');
    iss >>  lab13perf[i];
	 getline(iss, rand, ',');
    iss >>  lab14perf[i];
	 getline(iss, rand, ',');
    iss >>  lab15perf[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)
<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)
<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)
<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)
<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)
<<lab14perf[i]<<setw(12)<<mid[i]<<endl;	
}
void check_marksC()
{
int size=30;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],
lab12perf[size],lab13perf[size],lab14perf[size],lab15perf[size];
float lab1rep[size],lab2rep[size],lab3rep[size],lab4rep[size],lab5rep[size];
float mid[size];

   
string line;
ifstream file5("BEBME-OOP-GRADES.csv");
int i=0;
while (getline(file5, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab7perf[i];
	 getline(iss, rand, ',');
    iss >>  lab8perf[i];
	 getline(iss, rand, ',');
    iss >>  lab9perf[i];
	 getline(iss, rand, ',');
    iss >>  lab10perf[i];
	 getline(iss, rand, ',');
    iss >>  lab11perf[i];
	 getline(iss, rand, ',');
    iss >>  lab12perf[i];
	 getline(iss, rand, ',');
    iss >>  lab13perf[i];
	 getline(iss, rand, ',');
    iss >>  lab14perf[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)	
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)
<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)
<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)
<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)
<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)
<<lab14perf[i]<<setw(12)<<mid[i]<<endl;	

}
void check_marksD()
{
int size=23;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],
lab12perf[size],lab13perf[size],lab14perf[size],lab15perf[size],lab16perf[size];

float mid[size];

   
string line;
ifstream file6("POWER-CP.csv");
int i=0;
while (getline(file6, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
	getline(iss, rand, ',');
    iss >>  lab8perf[i];
	getline(iss, rand, ',');
    iss >>  lab9perf[i];
	getline(iss, rand, ',');
    iss >>  lab10perf[i];
	getline(iss, rand, ',');
    iss >>  lab11perf[i];
	getline(iss, rand, ',');
    iss >>  lab12perf[i];
	getline(iss, rand, ',');
    iss >>  lab13perf[i];
	getline(iss, rand, ',');
    iss >>  lab14perf[i];
	getline(iss, rand, ',');
    iss >>  lab15perf[i];
	getline(iss, rand, ',');
    iss >>  lab16perf[i];
	getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)
<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)
<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)
<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)
<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)
<<lab14perf[i]<<setw(12)<<lab15perf[i]<<setw(12)<<lab16perf[i]<<setw(12)<<mid[i]<<endl;		
}



// game



void game()
{
	
	numbers[1]='1';
    numbers[2]='2';
    numbers[3]='3';
    numbers[4]='4';
    numbers[5]='5';
    numbers[6]='6';
    numbers[7]='7';
    numbers[8]='8';
    numbers[9]='9';
int player=1, choice,i,ans,j=0; 
char sign,ch;	
do{
cout<<"\t \t ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; //1st impression
cout<<"\t \t !!!!!!!!! G_A_M_E TIME !!!!!!!!!"<<endl;
cout<<"\t \t ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl<<endl;
cout<<"\t ~ Option 1 \" TIC TAC TOE \" " <<endl; 
cout<<"\t ~ Option 2 \" NUMBER GUESSING \" \n" <<endl;
cout<<"\t * WHICH GAME YOU WANT TO PLAY : ";
cin>>ans;
cout<<endl<<endl;

switch(ans)
{ case 1:
	cout<<"\t//////////////////////////////"<<endl; 
	cout<<"\t////// TIC TAC TOE GAME //////"<<endl;
	cout<<"\t//////////////////////////////"<<endl<<endl;	
	cout<<"\t_____ Welcome to the Game _____"<<endl;
	char ans1;	
	do{ 
	board();
		
	if (player % 2==1)	//condition for player 1 
	player=1;
	else 
	player=2;			//will true when 1 is add in player. 
	cout<<"PLAYER " <<player <<" ENTER A NUMBER : " ;
	cin>>choice;
	
	if(player == 1)		// if condition for player sign printing;
	sign = 'X';
	else
	sign = 'O';

    //printing of sign at that place and also its verify that number place is not selected by previous player.
	if (choice == 1 && numbers [1] =='1') 
	numbers[1]= sign;
	
	else if(choice == 2 && numbers [2] =='2')
	numbers[2]=sign;
	
	else if(choice == 3 && numbers [3] =='3')
	numbers[3]= sign;
	
	else if(choice == 4 && numbers [4] =='4')
	numbers[4]= sign;
	
	else if(choice == 5 && numbers [5] =='5')
	numbers[5]= sign;	
	
	else if(choice == 6 && numbers [6] =='6')
	numbers[6]= sign;
	
	else if(choice == 7 && numbers [7] =='7')
	numbers[7]= sign;
		
	else if(choice == 8 && numbers [8] =='8')
	numbers[8]= sign;

	else if(choice == 9 && numbers [9] =='9')
	numbers[9]= sign;	
	else
    {
    cout<<"You Enter An Invalid Number "<<endl;
	player--; 			//eg player =1 player-- ; 0 
	j--;
	cout<<"Enter Again "<<endl;
	}
    i=checkwin();
    player++;			//player++ now player  add 
	if (i==1)
	j=9;
	j++;
	}while(j<=8);		// do while loop will when player wins
	board();
	if(i==1)
	{ 					//as for winning i is equal to 1 so;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<"  ==>  PLAYER  (" <<--player <<")  WIN "<<endl;
	cout<<" $$$ CONGRUTATION !!!!!!! $$$ " <<endl;
	}    
	else 
	{
	cout<<" ==>  GAME DRAW";
	}
	j=0;
	break;
	// game 2:
	case 2:
	cout<<"\t///////////////////////////////"<<endl; //1st impression
	cout<<"\t%%%%%% Number GUESSING GAME %%%%%%"<<endl;
	cout<<"\t///////////////////////////////"<<endl<<endl;
	cout<<"\t_________Welcome to the Game_________"<<endl;
	no_guess();
	break;
	default:
	cout<<"\t YOU ENTER WRONG OPTION ! "<<endl; 
}
cout<<"\nPress y to play again games : ";
cin>>ch;
	if (ch=='y'||ch=='Y')
    {
    numbers[1]='1';
    numbers[2]='2';
    numbers[3]='3';
    numbers[4]='4';
    numbers[5]='5';
    numbers[6]='6';
    numbers[7]='7';
    numbers[8]='8';
    numbers[9]='9';
    }
}while(ch=='y'||ch=='Y');
		
}
void board()
{
    //borad 
	cout<<" PLAYER 1 (X) & PLAYER 2 (O) "<<endl<<endl;
	cout<<"\t   "<<numbers[1]<<"  |  " <<numbers[2] <<"  |  "<<numbers[3] <<endl;;
	cout<<"\t _____|_____|_____"<<endl;
	cout<<"\t      |     |     "<<endl;
	cout<<"\t   "<<numbers[4]<<"  |  " <<numbers[5] <<"  |  "<<numbers[6] <<endl;;
	cout<<"\t _____|_____|_____"<<endl;
	cout<<"\t      |     |     "<<endl;
	cout<<"\t   "<<numbers[7]<<"  |  " <<numbers[8] <<"  |  "<<numbers[9] <<endl;;
	cout<<"\t      |     |     "<<endl;
}
int checkwin()
{ 
	//checking for the winner
	// 8 conditions of winning 
	if(numbers[1]==numbers[2] && numbers[2]==numbers[3])
	return 1;
	else if(numbers[4]==numbers[5] && numbers[5]==numbers[6])
	return 1;
	else if(numbers[7]==numbers[8] && numbers[8]==numbers[9])
	return 1;
	else if(numbers[1]==numbers[4] && numbers[4]==numbers[7])
	return 1;
	else if(numbers[2]==numbers[5] && numbers[5]==numbers[8])
	return 1;
	else if(numbers[3]==numbers[6] && numbers[6]==numbers[9])
	return 1;
	else if(numbers[1]==numbers[5] && numbers[5]==numbers[9])
	return 1;
	else if(numbers[3]==numbers[5] && numbers[5]==numbers[7])
	return 1;
	else
	return 0;
}
int no_guess()
{
	int num;
    int guess;
    int attempts=0;
    srand(time(0)); 	// Random number with time;
    num=(rand()%10)+1;	//limit of num b/w 100
    //cout<<"generated num =  "<<num<<endl;
    cout<<"*************************************"<<endl;
do{
    cout<<"* Enter your guess b/w 1 to 100   : ";
    cin>>guess;
    while(guess<1||guess>100)
	{ 
    cout<<"Invalid Guess. Enter again ! "<<endl;
    cin>>guess;
	}
    if(guess==num)
	{			 //condition of winning.
    cout<<"\n we will give you prize later!!"<<endl;
    cout<<"You have guessed the correct num. You have Won ! "<<endl<<endl;
	return 0;
	}
	//condition for hints;
    else if(guess<num) 
	{ 
    cout<<"your Guess is not correct. \n NUM YOU ENTER is less than the GAME NUM "<<endl<<endl;
    attempts++;
    cout<<"\n ATTEMPTS left = "<<5-attempts<<"\n ";
	}
    else if  (guess>num)
	{
    cout<<"your Guess is not correct. \n NUM YOU ENTER is greater than the GAME NUM "<<endl<<endl;
    attempts++;
    cout<<"\n ATTEMPTS left = "<<5-attempts<<"\n ";
	}
}
   while((guess!=num)&&(attempts!=5)); //loop will stop when guess = or attemp complete.
	cout<<"you lost the game ! "<<endl<<endl;
	cout<<"NUM GENERATED WAS : "<<num <<endl;}

