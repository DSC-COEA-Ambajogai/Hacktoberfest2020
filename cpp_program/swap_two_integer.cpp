/*       
          Name: Pythonites
          Program Name : swap_two_integer.cpp                        
*/

#include<iostream>
using namespace std;

void swap(int* a, int* b){
	int* temp;
	temp = a;
	a = b;
	b = temp;
}
int main(){
	int a, b;
	cout<<"Enter two integers: ";
	cin>>a>>b;
	
	cout<<"Before swapping\n a: "<<a<<"\tb: "<<b<<endl;
	
	swap(a, b);
	
	cout<<"Before swapping\n a: "<<a<<"\tb: "<<b<<endl;
	
	return 0;
}
