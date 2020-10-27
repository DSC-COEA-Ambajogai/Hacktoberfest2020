
/*       
          Name: Naitik
          Program Name :  C++ program for generating random number(s) in a given range                           
*/

#include <bits/stdc++.h>

// Generates and prints 'count' random numbers in range [lower, upper]. 

void printRandoms(int lower, int upper, int count) 
{ 
	int i; 
	for (i = 0; i < count; i++) 
    { 
		int num = (rand() % (upper - lower + 1)) + lower; 
		cout << num << " " ; 
	} 
} 

// Driver code 
int main() 
{ 
	int lower = 5, upper = 7, count = 1; 

	// Use current time as seed for random generator 
	srand(time(0)); 

	printRandoms(lower, upper, count); 

	return 0; 
} 
