/*       
          Name: Naman Jain
          Program Name : Program to find Average of n Numbers                           
*/

/*###########################Program to find Average of n Numbers################################## */
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter no. of values for which avg to be calculated: ";
	double sum=0;
	int num;
	double avg;
	cin>>num;
	double arr[num];
	for(int i=0;i<num;i++){
		cout<<"enter number for position "<<i+1<<": ";
		cin>>arr[i];
		sum +=arr[i];
	}
	avg= sum/num;
	cout<<"the average of all the given numbers is: "<<avg;

	return 0;
}