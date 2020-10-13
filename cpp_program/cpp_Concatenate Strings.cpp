/*       
          Name: shivam yadav
          Program Name : Concatenate Strings using Pointer                           
*/

/*###########################Program Name################################## */

#include <iostream>
#define MAX_SIZE 100 // Maximum size of the string
using namespace std;
 
int main() {
 
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;
 
    // Inputting 2 strings from user
    cout<<"Enter 1st string: ";
    cin>>str1;
    cout<<"Enter 2nd string: ";
    cin>>str2;
 
    // Moving till the end of str1
    while(*(++s1));
 
    // Coping str2 to str1
    while(*(s1++) = *(s2++));
 
    cout<<"Concatenated string:"<<str1;
 
    return 0;
 
}
 
/*###########################Program End################################## */

