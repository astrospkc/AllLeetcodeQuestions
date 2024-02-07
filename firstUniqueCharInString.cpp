#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "leetcode";
    unordered_map<char , pair<int, int>> mp;

    for(int i=s.length() -1 ; i>=0; i--){
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]] = {1, i};
        }else{
            mp[s[i]].first +=1;
            mp[s[i]].second = i;
        }
    }
    
    char ans;

    for(auto& ele:mp){
        if(ele.second.first == 1){
            cout<<ele.second.second;
            break;
        }
    }

    // cout<<ans;
}