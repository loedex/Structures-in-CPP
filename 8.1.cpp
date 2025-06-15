/*Write a program that declares a structure to Roll_No, Marks,Average, and Grade of a student. The program should define a structure variable,
inputs the values and then displays these values.*/

#include<iostream>
using namespace std;
struct Student{
	int rNO,marks;
	float avg;
	char grade;
};
int main(){
	Student var;
	void input(Student);
	void display(Student);
	input(var);
	//display(var);
	return 0;
}
void input(Student p){
	cout<<endl<<"Enter Roll No. ";
	cin>>p.rNO;
	cout<<endl<<"Enter Marks :";
	cin>>p.marks;
	cout<<endl<<"Enter Grade :";
	cin>>p.grade;
	cout<<endl<<"Enter Average Marks :";
	cin>>p.avg;
	cout<<endl<<"Roll No :"<<p.rNO<<endl<<"Marks :"<<p.marks<<endl<<"Grade :"<<p.grade<<endl<<"Average :"<<p.avg;
}
/*void display(Student q){
	cout<<endl<<"Roll No :"<<q.rNO<<endl<<"Marks :"<<q.marks<<endl<<"Grade :"<<q.grade<<endl<<"Average :"<<q.avg;
}*/