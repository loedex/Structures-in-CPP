//Array of Structures.
/*Write a program that declares a structure to store id,pages and price of a book. It defines an "array of structures" to store the records
of five books. It inputs the records of five books and displays the record of most costly book.*/

#include<iostream>
using namespace std;
struct Book_Record{
	int id,pages,price;
}var[5] /*var2*/;
int main(){
	for(int i=0; i<=4; i++){
		cout<<endl<<"Enter Book_ID :";
		cin>>var[i].id;
		cout<<endl<<"Enter Pages :";
		cin>>var[i].pages;
		cout<<endl<<"Enter Price :";
		cin>>var[i].price;
	}
	int index, max=var[0].price;
	for(int i=1; i<=4; i++){
		if(var[i].price>max){
			max=var[i].price;
			index=i;
		}
	}
	cout<<endl<<"Record of Most Costly Book is :";
	cout<<endl<<"Book ID :"<<var[index].id;
	cout<<endl<<"Book Pages :"<<var[index].pages;
	cout<<endl<<"Book Price :"<<var[index].price;
	//var2=var[4];
	//cout<<endl<<endl<<var2.id<<"\t"<<var2.pages<<"\t"<<var2.price;
	return 0;
}