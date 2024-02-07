#include<bits/stdc++.h>
using namespace std;

bool canTakeOrNot(string str, set<char>& st){

    set<char> temp;
    for(int i=0; i<str.length(); i++){
        if(temp.find(str[i]) != temp.end()){
            return false;
        }
        temp.insert(str[i]);
    }

    for(int i=0; i<str.length(); i++){
        if(st.find(str[i]) != st.end()){
            return false;
        }
        return true;
    }
}

int helper(vector<string>& arr, int i, set<char>& st){

    if(i>=arr.size()){
        return 0;
    }
    int take =0;
    int nottake  = 0;
    bool cantake = canTakeOrNot(arr[i], st);
    if(cantake){
        for(char c:arr[i]){
            st.insert(c);
        }
         //use for loop
        take = arr[i].length() + helper(arr, i+1, st);
        for(char c:arr[i]){
            st.erase(c); //use for loop
        }
        
    }

    nottake = helper(arr, i+1, st);
    return max(take, nottake);
}



int main(){
    vector<string> arr = {"un","iq","ue"};
    cout<<"Hello"<<endl;
    set<char> st;

    cout<<helper(arr, 0, st);
    return 0;


}