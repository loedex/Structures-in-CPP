/*Write a program that declares a structure to store marks and grade of a student. It defines two structure variables. It inputs values in one variable 
and assigns that variable to the second variable. Finallt displays the values of both variables.*/

#include<iostream>
using namespace std;
struct EMP{
	int marks;
	char grade;
}var1,var2;
int main(){
	cout<<"\nEnter Marks of Employee_1 :";
	cin>>var1.marks;
	cout<<"\nEnter Grade of Employee_2 :";
	cin>>var1.grade;
	var2=var1;
	cout<<"\nMarks and Grade of Employee_1 :"<<var1.marks<<"\t"<<var1.grade;
	cout<<"\nMarks and Grade of Employee_2 :"<<var2.marks<<"\t"<<var2.grade;
	return 0;
}