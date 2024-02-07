// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     vector<int> arr = {1,2,2,4};
//     vector<int> res;
//     map<int, int> mp;

//     for(int i=0; i<arr.size(); i++){
//         if(mp.find(arr[i]) == mp.end()){
//             mp[arr[i]] = 1;
//         }else{
//             mp[arr[i]] += 1;
//         }
//     }

//     for(auto& pair:mp){
//         if(pair.second!=1){
            
//             res.push_back(pair.first);
//         }
//     }

//     for(int i=1; i<=arr.size();i++){
//         if(mp.find(i) == mp.end()){
//             cout<<i<<""<<endl;
//             res.push_back(i);
//         }
//     }

//     for(int i=0; i<res.size(); i++){
//         cout<<res[i]<<" ";
//     }
// }

// one more method:
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr ={1,2,2,4};
    int mis =-1;
    int dup =-1;

    for(int i=0; i<arr.size();i++){
        if(arr[abs(arr[i])-1]<0){
            dup = abs(arr[i]);
        }else{
            arr[abs(arr[i])-1] *= -1;
        }
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[i]>0){
            mis=i+1;
        }
    }

    cout<<dup<<mis;
}