/*Let say you are building a compiler. The compiler you are building only understands angular brackets < and >. Since you must have already written a program in C, C++ or Java, you know that every opening curly bracket { should have corresponding closing } curly bracket else you get a compilation error. 
Similary the compiler that you are building will give compilation error if every opening angular bracket < does not have a corresponding > closing bracket. 
You aks your friends to write a program for this compiler using only angular brackets and they being a good friend have given you few codes. It might happen that if you compile the code it might give an error but if you compile its prefix it might run. Given a code you have to find the length of the longest prefix. In case no such prefix exists just output 00.
Note: <<><< ,>><< will give compilation error, while <>, <><><>, <<<>>> will not.


Example
Input
3 
4
 <<>>
 2 
><
 4
 <>>>
Output
4
0
2*/

#include <stdio.h>
#include <stdlib.h>
void check(char arr[],int n){
	int sum=0;
	int max=0;
	int i;
	for(i=0;i<n;i++){
		if(arr[i]=='<')
			sum+=1;
		else
			sum-=1;
		if(sum<0)
			break;
		if(sum==0)
			max=i+1;
	}
	printf("%d",max);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		char arr[n];
		scanf("%s",arr);


		check(arr,n);
        printf("\n");
	}
	return 0;
}
