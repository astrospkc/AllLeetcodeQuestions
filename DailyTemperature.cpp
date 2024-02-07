#include<bits/stdc++.h>
using  namespace std;

int main(){
    vector<int> temp = {30,40,50,60};
    vector<int> arr(temp.size(), 0);

    for(int i=0; i<temp.size()-1; i++){
        int count = 0;
        for(int j =i+1; j<temp.size(); j++){
            // cout<<"arr"<<j<<" "<<temm[j]<<endl;
            if(temp[j]>temp[i]){
                arr[i] = count+1;
                break;
            }else if(j==temp.size()-1 && temp[i]>temp[j]){
                arr[j]=0;
            }else if(temp[i] > temp[j]){
                count++;
            }
        }
    }

    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}