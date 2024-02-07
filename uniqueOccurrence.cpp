#include<bits/stdc++.h>
using namespace std;


bool uniqueOccurrence(map<int, int>& mp, map<int, int>& mp_rev){
    for(auto& pair:mp){
        if(mp_rev.find(pair.second) != mp_rev.end()){
            
            return false;
        }

        mp_rev[pair.second] == pair.first;
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,2,1,1,3,3};
    map<int, int> mp;
    map<int, int> mp_rev;

    for(int i=0; i<arr.size(); i++){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]]=1;
        }
        else{
            mp[arr[i]] += 1;
        }
    }

    cout<<uniqueOccurrence(mp, mp_rev);
    return 0;
    
}