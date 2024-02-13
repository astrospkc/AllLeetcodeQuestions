#include<bits/stdc++.h>
using namespace std;


bool reverse_string(string str){
    int mid  = str.length()/2;
    int start =0;
    int end = str.length()-1;

    while(start<end){
        if(str[start]== str[end]){
            start++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}

void num_palindrome(string s, int i, int j, int& count , string& str, vector<string>& res){
    if(j==s.length()){
        res.push_back(str);
        return;
    }
    
    if(j<s.length()){
        str += s[i];
        if(reverse_string(str)){
            count++;
            num_palindrome(s, i, j+1, count, str, res);
            str="";
        }
        else{
            // str ="";
            num_palindrome(s, i+1, i+1, count, str, res);
            str="";
        }
        
        // str=""

    }
}
int main(){
    string s  = "abcb";

    int count = 0;
    string str = " ";
    vector<string> res;
    num_palindrome(s, 0, 0, count, str, res);
    cout<<count;

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}