#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x < 10) return true;
    
    int original = x;
    long long reversed = 0;
    
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    
    return original == reversed;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}