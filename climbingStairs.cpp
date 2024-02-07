#include<bits/stdc++.h>
using namespace std;

int countWays(int n, int count, vector<int>& dp) {
    if (n == 0) {
        return 1;  // Base case: there is one way to climb 0 stairs (no steps)
    }

    int ways = 0;
    if(dp[n] != -1) return dp[n];
    // taking 2 steps
    if (n > 1) {
        ways += countWays(n - 2, count + 1, dp);
    }

    ways += countWays(n - 1, count + 1, dp);
    dp[n]= ways;
    return dp[n];
}

int main() {
    int n;
    cout << "Enter the stairs" << endl;
    cin >> n;
    vector<int> dp(n+1, -1);
    int result = countWays(n, 1, dp);

    cout << "Number of ways to climb the stairs: " << result << endl;

    return 0;
}
