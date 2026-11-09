#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fib(int n) {

        // Base case
        if (n <= 1)
            return n;

        // Create DP array
        vector<int> dp(n + 1);

        // Initialize base values
        dp[0] = 0;
        dp[1] = 1;

        // Calculate Fibonacci numbers
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        // Return final answer
        return dp[n];
    }
};

int main() {

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    Solution obj;

    cout << "Fibonacci number at position "
         << n << " is: " << obj.fib(n) << endl;

    return 0;
}