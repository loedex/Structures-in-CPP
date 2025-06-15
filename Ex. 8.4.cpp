/*Write a program that declares a nstructure Book to store Book_ID, name, and price. It declares another structure Order that contains 
OrderID and an array of Book of length 5. The program should define a variable of type Order and input the values from the user. The program 
finally displays the values.*/

#include<iostream>
using namespace std;
struct Book{
	int id,price;
	char name[30];
};
struct Order{
	Book t;
	int id;
}var[5];
int main(){
	for(int i=0; i<=4; i++){
	cout<<"Enter Book_ID :";
	cin>>var[i].t.id;
	cout<<"Enter Price :";
	cin>>var[i].t.price;
	cout<<"Enter BookName :";
	cin>>var[i].t.name;
	cout<<"Enter OrderID :";
	cin>>var[i].id;}
	return 0;
}