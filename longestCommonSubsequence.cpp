#include<bits/stdc++.h>
using namespace std;

int helper(string str1, string str2, int i, int j, vector<vector<int>>& dp){

    if(i>=str1.length() || j>=str2.length()){
        return 0;
    }

    if(dp[i][j] !=-1) return dp[i][j];
    int take = 0;
    int nottake = 0;
    if(str1[i]==str2[j]){
        take = 1 + helper(str1, str2, i+1, j+1, dp);
    }
    nottake = max({helper(str1, str2, i+1, j,dp), helper(str1, str2, i, j+1,dp), helper(str1, str2, i+1, j+1, dp)});

    dp[i][j] = max(take, nottake);
    return dp[i][j];

}


int main(){
    string test1 ="abcde";
    string test2 = "ace";
    int n = test1.length();
    int m = test2.length();

    vector<vector<int>> dp(n, vector<int>(m, -1));
    int length = helper(test1, test2, 0, 0, dp);
    cout<<"length of the subsequence: "<<length;
    return 0;

    

}