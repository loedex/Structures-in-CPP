/*Write a program that declares a structure to store employee ID and salary of an employee. It defines and initializes a structure variable
and displays it.*/

#include<iostream>
using namespace std;
struct EMP{
	int id,salary;
}member={12,5000000};
int main(){
	//member={12,5000000};
	cout<<endl<<"Employee ID :"<<member.id<<endl<<"Employee's Salary :"<<member.salary;
	return 0;
}