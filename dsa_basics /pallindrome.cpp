#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "madam";
    int left = 0;
    int right = s.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    cout << "String: " << s << endl;

    if (isPalindrome) {
        cout << "Result: Palindrome" << endl;
    } else {
        cout << "Result: Not a Palindrome" << endl;
    }

    return 0;
}