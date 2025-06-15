/*Write a program that uses two structures Date ad PhoneBook. tHE date structure stores day,month, and year. PhoneBook structure stores name,city,
telephone and a Date type. The program declares a variable of type PhoneBook, inputs values and displays.*/
#include<iostream>
using namespace std;
struct Date{
	int day,month,year;
};
struct PhoneBook{
	char name[20],city[20];
	unsigned phNo;
	Date t;
}var;
int main(){
	cout<<endl<<"Enter Name :";
	cin>>var.name;
	cout<<endl<<"Enter City Name :";
	cin>>var.city;
	cout<<endl<<"Enter Telephone No :";
	cin>>var.phNo;
	cout<<endl<<"Enter Day :";
	cin>>var.t.day;
	cout<<endl<<"Enter Month :";
	cin>>var.t.month;
	cout<<endl<<"Enter Year :";
	cin>>var.t.year;
	cout<<endl<<"\tName :"<<var.name;
	cout<<endl<<"\tCity_Name :"<<var.city;
	cout<<endl<<"\tTelephone No :"<<var.phNo;
	cout<<endl<<"\tDay :"<<var.t.day;
	cout<<endl<<"\tMonth :"<<var.t.month;
	cout<<endl<<"\tYear :"<<var.t.year;
	return 0;
}