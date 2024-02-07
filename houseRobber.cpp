#include<bits/stdc++.h>
using namespace std;


int main(){
    cout<<"the number: "<<endl;
    vector<int> nums= {1,2,3,1};
    cout<<"the size of the nums array" <<nums.size();

    int sum1 = 0;
    int sum2 = 0;
    
    for(int i =0; i<nums.size(); i+=2){
        sum1 += nums[i];
    }
    cout<<"sum0 "<<sum1<<endl;

    for(int i=1;i<nums.size(); i+=2){
        sum2 += nums[i];
    }
    cout<<"sum1 "<<sum2<<endl;

    cout<<max(sum1, sum2);
    return 0;

}