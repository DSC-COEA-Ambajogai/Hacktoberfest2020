/*
        Name: shivam yadav
        Program Name: linear search through recursion
*/

/*########## Program Start ##########*/

#include<iostream>
    using namespace std;
  
    int recursiveLinearSearch(int array[],int key,int size){
    size=size-1;
      if(size <0){
      return -1;
      }
      else if(array[size]==key){
      return 1;
      }
      else{
      return recursiveLinearSearch(array,key,size);
      }
    }

 
    int main() {
  
      cout<<"Enter The Size Of Array:   ";
    int size;
    cin>>size;
    int array[size], key,i;
    
    // Taking Input In Array
    for(int j=0;j<size;j++){
    cout<<"Enter "<<j<<" Element : ";
    cin>>array[j];
    }
    //Your Entered Array Is
    for(int a=0;a<size;a++){
       cout<<"array[ "<<a<<" ]  =  ";
       cout<<array[a]<<endl;
    }
    cout<<"Enter Key To Search  in Array";
    cin>>key;
    int result;
    result=recursiveLinearSearch(array,key,size--);
    if(result==1){
    cout<<"Key Found in Array  ";
    }
    else{
    cout<<"Key NOT Found in Array  ";
    }
       return 0;
    }

/*########## Program End ##########*/
