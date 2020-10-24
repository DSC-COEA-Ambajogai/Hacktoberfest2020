#include <iostream>
using namespace std;
int findStep(int n) 
{ 
	if (n == 1 || n == 0) 
		return 1; 
	else if (n == 2) 
		return 2; 
	
	else
		return findStep(n - 3) + 
			findStep(n - 2) + 
			findStep(n - 1); 
}  

int helper(int n,int *arr){
    if(n<=1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    int a=helper(n-1,arr);
    int b=helper(n-2,arr);
    int c=helper(n-3,arr);
    
    arr[n]=a+b+c;
    
    return arr[n];
}


int findStep2(int n){
    int *arr=new int[n+1];
    
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    
    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    
    return arr[n];
}

int findStep1(int n){
    int *arr=new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }
    
    return helper(n,arr);
}

int main()
{
    int n;
    cin>>n;
    cout<<findStep(n)<<endl;
    cout<<findStep1(n)<<endl;
    cout<<findStep2(n);
    return 0;
}

