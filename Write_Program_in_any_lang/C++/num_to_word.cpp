#include <iostream>
#include <vector>
using namespace std;

void solve(int num);
string num_in_words(int n);
void display(const vector <string> &vec);

int main() {

    int num {};
    cout << "Enter a number: ";
    cin >> num;

    solve(num);

    return 0;
}

void solve(int n) {

    int rem {};
    vector <string> vec {};

    while (n) {
        rem = n % 10;
        vec.push_back(num_in_words(rem));
        n /= 10;
    }

    display(vec);
    cout << endl;
}

string num_in_words(int n) {

    string word {"None"};

    switch(n) {

        case 0: word = "Zero"; break;
        case 1: word = "One"; break;
        case 2: word = "Two"; break;
        case 3: word = "Three"; break;
        case 4: word = "Four"; break;
        case 5: word = "Five"; break;
        case 6: word = "Six"; break;
        case 7: word = "Seven"; break;
        case 8: word = "Eigth"; break;
        case 9: word = "Nine"; break;

        default: cout << " "; break;
    }

    return word;
}

void display(const vector <string> &vec) {
    
    for (int i = (vec.size()-1); i >=0; i--)
        cout << vec.at(i) << " ";
}