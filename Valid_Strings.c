/*Arnab loves brackets and any valid sequence of brackets. 
On his birthday, he expected a valid sequence of brackets from his friends.
He is upset because some of his friends deliberately gifted him an invalid sequence.
Now, Arnab decided to fix the sequence himself by moving only one of the brackets in the sequence.

A bracket sequence (S) is valid only if:
1. S is empty
2. S is equal to "(t)", where t is a valid sequence
3. S is equal to "(t1 t2)" ie. concatenation of t1 and t2, where t1 and t2 are valid sequences.

Arnab, being a lazy person wants you to check if the sequence can be made valid by moving just one bracket (if required).

Example
Input
3
)(
(())
))((

Output
Yes
Yes
No */

#include <stdio.h>
#include <string.h>
  
  int main()
  {
      int t;
      scanf("%d",&t);
      while(t--)
      {
      char s[100001];
   scanf("%s",s);
   long long int count=0,len,count1,count2;
   int flag=0;
   len=strlen(s);
   if(len%2==1)
     printf("No\n");
     else
     {
    for(int i=0;s[i]!='\0';i++)
   {
       if(s[i]=='(')
        count++;
        else if(s[i]==')')
         count--;
      if(count<=-2){
       flag=1;
       break;
      }
   }
   if(flag==1)
     printf("No\n");
     else if(count>0)
      printf("No\n");
      else if(count==0)
      printf("Yes\n");
      
     }
      }
    return 0;
  }
