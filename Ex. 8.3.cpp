/*Write a program that declares a structure to store income,tax_rate and tax of a person. The program defines an array of structure 
to store the record of five persons. It inputs income and tax rate of five persons and displays the tax payable.*/

#include<iostream>
using namespace std;
struct Record{
	int income,tax,taxRate;
}var[5];
int main(){
	for(int i=0; i<=4; i++){
		cout<<"Enter Income :";
		cin>>var[i].income;
		cout<<"Enter Tax_Rate :";
		cin>>var[i].taxRate;
		var[i].tax=var[i].income*var[i].taxRate/100;
		cout<<"Tax is :"<<var[i].tax<<endl;
	}
	return 0;
}