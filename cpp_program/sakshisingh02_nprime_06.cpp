/*       
          Name: Sakshi Singh
          Program Name : Print first n Prime Numbers                          
*/

/*########################### Print first n Prime Numbers ################################## */
#include <iostream>
using namespace std;

int primecheck(int number)
{
    if(number <= 1)
        return 0;
        
    if(number <= 3)
        return 1;
        
    if(number%2 == 0 || number%3 == 0)
        return 0;
        
    for (int i = 5; i * i <= number; i = i + 6) 
        if (number % i == 0 || number % (i + 2) == 0) 
            return 0; 
    
    return 1;
}

int main()
{
    int num;
    cout<<"Enter the limit: ";
    cin>>num;
    
    cout<<"The prime numbers upto "<<num<<" are:"<<endl;
    for(int i = 0; i<=num; i++)
    {
        if(primecheck(i))
            cout<<i<<" ";
    }

    return 0;
}

/*########################### Program End ################################## */
