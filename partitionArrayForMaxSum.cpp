#include<bits/stdc++.h>
using namespace std;

int f(int i, int n, int k , vector<int>& arr, vector<int>& dp){
    if(i==n){
        return 0;
    }

    int len = 0;
    int maxi = INT_MIN;
    int maxAns = 0;

    if(dp[i]!= -1) return dp[i];
    for(int j = i; j<min(n, i+k); j++){
        len++;
        maxi = max(maxi, arr[j]);
        int sum = len * maxi + f(j+1,n, k, arr, dp);
        maxAns = max(maxAns, sum);

    }
    dp[i] = maxAns;
    return dp[i];
}

int main()
{
    vector<int> arr = {1,15,7,9,2,5,10};
    int k = 3;
    int n = arr.size();
    vector<int> dp(n, -1);

    cout<<f(0,n, k, arr, dp);
}