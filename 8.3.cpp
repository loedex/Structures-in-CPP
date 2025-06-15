/*Write a program that declares a struture to store BookID,price and pages of a book. It defines two structures variables and input values.
It displays the record of most costly book.*/

#include<iostream>
using namespace std;
struct Info{
	int bookID,price,pages;
}me1,me2;
int main(){
	//Info me1,me2;
	void fn(Info,Info);
	fn(me1,me2);
	return 0;
}
void fn(Info p, Info q){
	cout<<endl<<"Enter ID,price and Pages of Book_1 :";
	cin>>p.bookID>>p.price>>p.pages;
	cout<<endl<<"Enter ID,Price and Pages of Book_2 :";
	cin>>q.bookID>>q.price>>q.pages;
	if(p.price>q.price)
	cout<<"Book_1 is most costly :"<<endl<<p.bookID<<"\t"<<p.price<<"\t"<<p.pages;
	else
	    cout<<"Book_2 is most costly :"<<endl<<q.bookID<<"\t"<<q.price<<"\t"<<q.pages;
}