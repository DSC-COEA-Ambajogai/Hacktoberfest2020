/*       
          Name: Your Name
          Program Name : hello world    (as per list)                           
*/
#include<stdio.h>
void main(){
int a[],n;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Reverse Array");
for(int i=n-1;i>=0;i--){
printf("%d",a[i]);
}
