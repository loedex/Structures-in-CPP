//Union
/*Write a program that uses a union Shirt to store size,chest and height. The program inputs size,chest_measurement and height_measurement
and displays the values.*/

#include<iostream>
using namespace std;
union Shirt{
	char size;
	int chest,height;
}var;
int main(){
	cout<<endl<<"Enter Size : (S,M,L) ";
	cin>>var.size;
	cout<<"The Size is :"<<var.size;
	cout<<endl<<"Enter Chest measurement :";
	cin>>var.chest;
	cout<<"Chest :"<<var.chest;
	cout<<endl<<"Enter height :";
	cin>>var.height;
	cout<<"Height :"<<var.height;
    //cout<<"\nSize :"<<var.size<<var.chest;
	return 0;
}