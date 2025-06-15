/*Write a program that declares a structure Teacher to store Teacher_ID, Teacher_Name, and salary. The program defines an array
of structure to store the records of four teachers. It inputs the records of four teachers. Then program inputs a Teacher_ID from 
user and searchb the teacher and show it record.*/

#include<iostream>
using namespace std;
struct T{
	int id,salary;
	char name[100];
}arr[4];
int main(){
	for(int i=0; i<4; i++){
		cout<<endl<<"Enter ID :";
		cin>>arr[i].id;
		cout<<endl<<"Enter Salary :";
		cin>>arr[i].salary;
		cout<<endl<<"Enter Name :";
		cin>>arr[i].name;
	}
	int index,in;
	cout<<"Enter id :";
	cin>>in;
	in--;
	for(int i=0; i<=3; i++){
		if(in=arr[i].id)
		index=i;
	}
	cout<<endl<<"ID :"<<arr[index].id;
	cout<<endl<<"Salary :"<<arr[index].salary;
	cout<<endl<<"Name :"<<arr[index].name;
	return 0;
}
