#include <iostream>
#include <cstdio>
using namespace std;

void reverseNum(size_t n);

int main()
{
    size_t num {};
    printf("Enter a number: ");
    scanf("%ld", &num);
    reverseNum(num);
    return 0;
}

void reverseNum(size_t n)
{
    int remainder {};
    size_t rev = 0;
    
    do
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
        
    } while (n);
    
    cout << rev << "\n";
}