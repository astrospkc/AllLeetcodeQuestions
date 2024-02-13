#include<bits/stdc++.h>
using namespace std;


bool Reverse(string word){
    int mid = word.length()/2;
    for(int i = 0; i<mid; i++){
        if(word[i]==word[word.length() - (i+1)]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<string> words = {"abc","car","ada","racecar","cool"};
    int index    = -1;
    for(int i=0; i<words.size(); i++){
        if(Reverse(words[i])){
            index = i;
            break;
        }else{
            index =-1;
        }
    }

    if(index ==-1){
        cout<<" ";

    }else{
        cout<<words[index];
    }
}