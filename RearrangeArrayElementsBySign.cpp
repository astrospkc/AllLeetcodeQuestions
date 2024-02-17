#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums = {-1, 1};

    // vector<int> a1;
    // vector<int> a2;
    int n = nums.size();

    for(int i= 0; i<n; i+=2){
        if(nums[i]<0){
            if(i>0){
                // check the number left right which one is positive
                if(nums[i-1]<0){
                    int temp = nums[i-1];
                    nums[i-1] = nums[i];
                    nums[i] = temp;
                }else if(nums[i+1]<0){
                    int temp = nums[i-1];
                    nums[i-1] = nums[i];
                    nums[i] = temp;
                }
            }
        }
    }

    // for odd position
    for(int i= 1; i<n; i+=2){
        if(nums[i]<0){
            if(i>0){
                // check the number left right which one is positive
                if(nums[i-1]<0){
                    int temp = nums[i-1];
                    nums[i-1] = nums[i];
                    nums[i] = temp;
                }else if(nums[i+1]<0){
                    int temp = nums[i-1];
                    nums[i-1] = nums[i];
                    nums[i] = temp;
                }
            }
        }
    }

    for(int i =0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }

    

    
}