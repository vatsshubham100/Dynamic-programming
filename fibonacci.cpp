#include<bits/stdc++.h>
using namespace std;

int fibDP(int n, vector<int> &dp) {
    if(n <= 1) {
        return n;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    dp[n] = fibDP(n-1, dp) + fibDP(n-2, dp);
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    
    vector<int> dp(n+1, -1);
    cout << fibDP(n, dp) << endl;

    return 0;
}