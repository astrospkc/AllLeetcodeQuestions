#include<bits/stdc++.h>
using namespace std;

void subArrays(int i, int ptr, vector<vector<int>>& res, vector<int>& arr, vector<int>& curr){

    if(ptr == arr.size()){
        return;
    }

    if(i==arr.size()){
        ptr++;
        res.push_back(curr);
    }

    curr.push_back(arr[i]);
    subArrays(i+1, ptr, res, arr, curr);
    curr.pop_back();

    
}

int main(){
    vector<vector<int>> res;
    vector<int> curr;
    vector<int> arr = {1,3,4,5};
    cout<<"result";
    subArrays(0, 0, res, arr, curr);
    cout<<"the result";
    for(int i=0; i<res.size(); i++){
        for(int j =0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}