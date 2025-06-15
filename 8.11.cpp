//Nested Structure.
/*Write a program that uses two structures Result and Record. The Result structure stores marks and grade , and Record structure 
stores rollNo and Result type. The program declares a variable of type Record,inputs rollNo,marks and grade. It finally displays the values.*/

#include<iostream>
using namespace std;
struct Result{
	int marks;
	char grade;
};
struct Record{
	int rollNo;
	Result t;
}var;
int main(){
	cout<<endl<<"Enter Roll_No :";
	cin>>var.rollNo;
	cout<<endl<<"Enter Marks :";
	cin>>var.t.marks;
	cout<<endl<<"Enter Grade :";
	cin>>var.t.grade;
	cout<<endl<<"\tRoll No :"<<var.rollNo;
	cout<<endl<<"\tMarks :"<<var.t.marks;
	cout<<endl<<"\tGrade :"<<var.t.grade;
	return 0;
}