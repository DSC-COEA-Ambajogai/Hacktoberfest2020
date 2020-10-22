/*       
          Name: Yasasvi V Peruvemba
          Program Name : Find Largest among n Numbers    (as per list)                           
*/

/*###########################Program Name################################## */

#include <iostream>

int main() {
    long long int n, t, ans = LLONG_MIN;
    std::cout << "Enter n : ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> t;
        if(t > ans) ans = t; // Updates answer to current largest encountered
    }
    std::cout << "The largest among these numbers is : " << ans << std::endl;
    return 0;
}
/*###########################Program End################################## */
