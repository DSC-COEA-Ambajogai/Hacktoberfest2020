/*Program to find x to the power n (i.e. x^n) recusively*/

#include <iostream>
using namespace std;

int power(int x, int n) {
	int result;
	if (n == 0) {
		return 1;
	}
	result = x * power(x, n - 1);
	return result;
}

int main() {
	int x = 0, n = 0;
	cin >> x >> n;
	cout << power(x, n) << endl;

	return 0;
}
