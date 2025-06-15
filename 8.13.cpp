/*Write a program that uses three structures Dimension,Result and Rectangle. The Dimension Structure stores length and width, Result structure stores
area and perimeter, and Rectangle structure stores two variables of Dimension and Result. The program declares a variable of type Rectangle, inputs
length,width, and calculates area and perimiter of rectangle and finally displays the result.*/

#include<iostream>
using namespace std;
struct Dimension{
	float length,width;
};
struct Result{
	float area,perimeter;
};
struct Rectangle{
	Dimension t1;
	Result t2;
}var;
int main(){
	cout<<endl<<"Enter Length :";
	cin>>var.t1.length;
	cout<<endl<<"Enter Width :";
	cin>>var.t1.width;
	var.t2.area=var.t1.length*var.t1.width;
	var.t2.perimeter=2*var.t1.length+2*var.t1.width;
	cout<<"\n\tArea of Rectangle :"<<var.t2.area;
	cout<<"\n\tArea of Perimeter :"<<var.t2.perimeter;
	return 0;
}