#include<bits/stdc++.h>
using namespace std;


void f(map<char, int>& mp, string s, int i, vector<string>& str, vector<vector<string>>& res, vector<string>& curr){
    
    if(i==str.size()){
        return;
    }
    map<char, int> mp1;
    for(int i=0; i<s.length(); i++){
        if(mp1.find(s[i])==mp.end()){
            mp1[s[i]] = 1;
        }else{
            mp1[s[i]]++;
        }
    }

    if(mp1.size()== mp.size())
    {
        for(auto it = mp.begin(); it != mp.end(); ++i){
            auto it2 = mp1.find(it->first);
            if(it2 == mp.end()||it2->second != it->second){
                return;
            }
        }
        curr.push_back(s);
        res.push_back(curr);
    }
}

int main(){
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};
    if(str.size()==1){
        if(str[0]==""){
            cout<<" ";
            return 0;
        }
    }
    vector<string> curr;
    map<char, int> mp;
    vector<vector<string>> res;
    for(int i =0; i<str.size(); i++){
        if(curr.size()==0){
            curr.push_back(str[i]);
            for(int j =0 ; j<str[i].length(); j++){
                if(mp.find(str[i][j])==mp.end()){
                    mp[str[i][j]] = 1;
                }else{
                    mp[str[i][j]]++;
                }
            }
        }else{
            f(mp, str[i+1], i+1, str, res, curr);
        }
    }
    cout<<"printing all the string present in the result arrray"<<endl;
    for(int i= 0; i<res.size(); i++){
       for(int j =0; j<res[i].size(); j++){
        cout<<res[i][j]<<" ";
       }
    }
}