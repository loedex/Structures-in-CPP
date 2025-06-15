/*Write a program that uses a structure to store three parts of phone No. i.e, National Code, Area Code and Number separately. Create two variables of
structure. Initialize one variable and get inputs from the user in one variable and then displays both members.*/

#include<iostream>
using namespace std;
struct PH{
	int nationalNo,araeaNo,phNo;
}var1,var2={92,34,466};
int main(){
	cout<<endl<<"Enter National No. , Area Code and PH. No. :";
	cin>>var1.nationalNo>>var1.araeaNo>>var1.phNo;
	cout<<endl<<"PH. No_1 :"<<var1.nationalNo<<var1.araeaNo<<var1.phNo<<endl<<"PH. No_02 :"<<var2.nationalNo<<var2.araeaNo<<var2.phNo;
	return 0;
}