


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "treetreerrropa";
    map<char, int> mp;

    for(int i =0; i<s.length(); i++){
        if(mp.find(s[i])== mp.end()){
            mp[s[i]] = 1;
        }else{
            mp[s[i]]++;
        }
    }

   

    vector<pair<char, int>> vec;
    for(auto& pair:mp){
        vec.push_back(pair);
    }


    
    // sort(vec.begin(), vec.end(), [&](const pair<char, int>& a, const pair<char, int>& b) {
    //     return a.second > b.second;
    // });

    sort(vec.begin(), vec.end(), greater<int>());

    for(const auto& pair:vec){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    string str = "";
    for(auto& p : vec){
        for(int i = 0; i<p.second; i++){
            str += p.first;
        }
    }
    cout<<"the required string : "<<str;
    return 0;
}