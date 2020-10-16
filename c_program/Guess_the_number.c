#include<stdio.h> 
void main() 
{ 
int sum=0,i,n,n1,n2,n3,n4,n5,n6,n7; 
char k; 
/*assigning the arrays 
First make it in a book later apply the code, 
Its a simple task to make that....*/ 
int a[18]={14,12,3,9,11,3,17,8,19,9,15,27,31,7,42,53,29,6}; 
int b[18]={9,16,0,7,23,06,6,1,0,12,75,33,52,47,2,12,13,15}; 
int c[18]={17,23,1,4,12,8,9,37,1,65,16,45,9,77,12,15,4,9}; 
int d[18]={21,34,2,9,5,39,27,2,7,19,8,40,22,61,47,23,42,7}; 
int e[18]={5,71,17,13,57,9,5,4,12,9,28,66,6,84,43,71,85,90}; 
int f[18]={42,93,0,7,63,16,23,2,91,57,0,12,1,7,89,97,53,3}; 
int g[18]={91,27,74,6,63,7,79,56,9,5,19,23,54,8,4,63,49,6}; 
printf("HI, I am PROM I will guess your number\n\n"); 
printf("**********Keep a NUMBER in your mind from 1 to 9**********\n"); 
printf(" Press 'c' to continue\n"); 
scanf("%c",&k); 
printf("1)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",a[i]); 
} 
scanf("%d",&n1); 
if(n1==1) 
{ 
sum=sum+3; 
printf("2)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",b[i]); 
} 
scanf("%d",&n2); 
} 
else if(n1==0) 
{ 
printf("2)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",b[i]); 
} 
scanf("%d",&n2); 
} 
if(n2==1) 
{ 
sum=sum+0; 
printf("3)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",c[i]); 
} 
scanf("%d",&n3); 
} 
else if(n2==0) 
{ 
printf("3)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",c[i]); 
} 
scanf("%d",&n3); 
} 
if(n3==1) 
{ 
sum=sum+1; 
printf("4)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",d[i]); 
} 
scanf("%d",&n4); 
} 
else if(n3==0) 
{ 
printf("4)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",d[i]); 
} 
scanf("%d",&n4); 
} 
if(n4==1) 
{ 
sum=sum+2; 
printf("5)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",e[i]); 
} 
scanf("%d",&n5); 
} 
else if(n4==0) 
{ 
printf("5)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",e[i]); 
} 
scanf("%d",&n5); 
} 
if(n5==1) 
{ 
sum=sum+1; 
printf("6)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",f[i]); 
} 
scanf("%d",&n6); 
} 
else if(n5==0) 
{ 
printf("6)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",f[i]); 
} 
scanf("%d",&n6); 
} 
if(n6==1) 
{ 
sum=sum+0; 
printf("7)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",g[i]); 
} 
scanf("%d",&n7); 
} 
else if(n6==0) 
{ 
printf("7)PRESS '1' if your number is present in this column else PRESS '0'...\n"); 
for(i=0;i<18;i++) 
{ 
printf("\t---> %d\n",g[i]); 
} 
scanf("%d",&n7); 
} 
if(n7==1) 
{ 
sum=sum+2; 
printf("The number which is in you mind is %d\n\n ",sum); 
printf("If you say I am incorrect PLEASE PASS MY TEST CAREFULLY\n\n\n"); 
} 
else if(n7==0) 
{ 
printf("The number which is in you mind is %d\n\n",sum); 
printf("\t\t If you say I am incorrect PLEASE PASS MY TEST CAREFULLY\n\n\n"); 
} 
} 
