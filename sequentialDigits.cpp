// here the ideation is that there is number from 1 to 9 , we have to check whether the number between is greater than low and less than high.
// use the concept of sliding window 1,2,3,4,5,6,7,8,9 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int low;
    int high;
    cout<<"enter low and high limit"<<endl;
    cin>>low>>high;
    vector<int> a;

    for(int i=1; i<=9; i++){
        int num = i;
        int nextDigit = i+1;

        while(num<=high && nextDigit<=9){
            num = num*10+ nextDigit;
            if(num >= low && num <= high){
                a.push_back(num);
            }
            nextDigit++;
        }
    }

    sort(a.begin(), a.end());


    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}

