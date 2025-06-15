/*Write a program that declares a structure to store day, month, and year of birth_date. It inputs three values and displays date
of birth in DD/MM/YY format.*/

#include<iostream>
using namespace std;
struct DOB{
	int day,month,year;
};
int main(){
	DOB me;
	void fn(DOB);
	fn(me);
	return 0;
}
void fn(DOB p){
	cout<<endl<<"Enter DD,MM and YY :";
	cin>>p.day>>p.month>>p.year;
	cout<<endl<<"DOB is :"<<p.day<<"/"<<p.month<<"/"<<p.year;
}