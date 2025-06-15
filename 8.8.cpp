//Array as member of Structure
/*Write a program that declares a structure to store Roll_No and Marks of five subjects.It defines a structure variable,
inputs the values and displays Roll_No,Marks and Average_Marks.*/

#include<iostream>
using namespace std;
struct Record{
	int rollNo[5],marks[5];
}var;
int main(){
	int sum;
	for(int i=0; i<=4; i++){
		cout<<"Enter Roll No :";
		cin>>var.rollNo[i];
		cout<<"Enter Marks :";
		cin>>var.marks[i];
		sum+=var.marks[i];
	}
	cout<<"\nAverage :"<<sum/5;
	for(int i=0; i<5; i++){
		cout<<endl<<var.rollNo[i]<<" = "<<var.marks[i];
	}
	return 0;
}