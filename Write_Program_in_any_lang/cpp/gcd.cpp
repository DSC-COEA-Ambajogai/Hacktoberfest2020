//program to find GCD of 2 numbers - Irfan Shaikh
/*
Psudeo Code Algorithm: 
->main() function
(1) START
(2) PRINT "Enter 2 Numbers: "
(3) INPUT n1, n2
(4) ans = CALL find_gcd(arguments: n1, n2)
(5) PRINT ans
(6) STOP
->find_gcd(parameters: n1, n2) function
(1) START
(2) IF n1 >= n2, THEN n = n1, ELSE n = n2
(3) i = 1
(4) IF i >= n, THEN GOTO step 7 ELSE GOTO step 4
(5) IF ((n1 mod = 0) AND (n2 mod = 0)), THEN  gcd = i
(6) i++
(7) GOTO step 3
(8) RETURN gcd
*/
#include <iostream>
#define el endl
#define ull unsigned long long
using namespace std;

ull find_gcd(ull n1, ull n2) {
   
    ull gcd {};
    ull n  = ((n1 <= n2) ? n1 : n2);

    for (ull i = 1;  i <= n; i++) {
        if ((n1 % i == 0) && (n2 % i == 0))
            gcd = i;
    }

    return gcd;
}

int main() {

    ull n1 {}, n2 {}, ans {};

    cout << "Enter 2 Numbers: ";
    cin >> n1 >> n2;

    ans = find_gcd(n1, n2);
    cout << "GCD = " << ans << el;

    return 0;
}