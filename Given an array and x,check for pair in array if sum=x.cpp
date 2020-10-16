//here we are usign two pointer trick 
//where as we will given pointer at the begining and at the end
//but for that array must be sorted!!!
#include<bits/stdc++.h>

using namespace std;

bool hasarrayTwoCandidate(int A[], int arr_size, int sum)
{
	int i,r;
	sort(A, A + arr_size);
	i=0;
	r = arr_size - 1;
	while (i<r)
	{
		if(A[i] + A[r] == sum)
			return 1;
		else if (A[i] + A[r] < sum)
			i++;
		else 
			r--;
	}
	return 0;
}

int main()
{
	int A[] = {2,5,35,-6,9,8};
	int n = 17;
	int arr_size = sizeof(A) / sizeof(A[0]);
	
	//call function
	if(hasarrayTwoCandidate(A,arr_size,n))
		cout<< "Array has two elements";
	else 
		cout << "doesn't have two elements";
		return 0;
		
}
