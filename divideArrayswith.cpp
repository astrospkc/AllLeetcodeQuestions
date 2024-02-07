#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr ={1,3,4,8,7,9,3,5,1};

    vector<vector<int>> ans;
    int k;
    cout<<"Enter target: "<<endl;
    cin>>k;
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-2; i+=3){
        if((arr[i+2] - arr[i])>k) return {};

        ans.push_back({arr[i],arr[i+1], arr[i+2]});
    }

    for(int i= 0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;

    }

}