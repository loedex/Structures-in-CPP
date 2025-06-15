/*Write a program that uses a structure to store employee number, name, hours worked, hourly rate and gross pay. The program inputs employee number 
, name, hours_worked, and hourly rate, calculates gross pay and then displays all employee data.*/

#include<iostream>
using namespace std;
struct EMP{
	char emp_name[50];
	int hours_worked,hourly_rate,gross_pay;
}var;
int main(){
	cout<<endl<<"Enter Name :\nEnter hours worked :\nhourly rate :\nand gross pay.";
	cin>>var.emp_name>>var.hours_worked>>var.hourly_rate>>var.gross_pay;
	cout<<"\nEmployee Name :"<<var.emp_name<<"\nHours Worked :"<<var.hours_worked<<"\n Hourly Rate :"<<var.hourly_rate<<"\nGross Pay :"<<var.gross_pay;
	return 0;
}
