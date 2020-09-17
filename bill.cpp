/*
NAME     : ARUSH NAUDIYAL
ROLL NO. : 12
SECTION  : C
*/
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
	float unit,d;
	float bill=0;
	cout<<"\t\t\t*******INPUT*******";
	string name;
	cout<<"\nEnter name of the consumer : ";
	getline(cin,name);
	cout<<"Enter the number of units consumed : ";
	cin>>unit;
	if(unit<=100)
	{
		bill=bill+60*unit;
	}
	 if(unit>100&&unit<=300)
	{
		bill=bill+60*100;
		d=unit-100;
		bill=bill+80*d;
	}
	 if(unit>300)
	{
		bill=bill+80*200+60*100;
		d=unit-300;
		bill=bill+90*d;
	}
	bill=bill/100;
	if(bill>300)
	{
		bill=bill+0.15*bill;
	}
	bill=bill+50;
	cout<<"\t\t\t*******OUTPUT*******";
	cout<<"\nCustomer : "<<name<<endl;
	cout<<"Bill Amount : "<<bill;
getch();
}
