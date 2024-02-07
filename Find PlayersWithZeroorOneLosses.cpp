#include<bits/stdc++.h>
using namespace std;

void winloose(vector<vector<int>>& matches, map<int, int>& winner, map<int, int>& looser){

    for(int i=0; i<matches.size(); i++){
        // if element is present
        if(winner.find(matches[i][0] != winner.end())){
            winner[matches]
        }
    }
}

int main(){
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};

    map<int, int> winner;
    map<int, int> looser;

    winloose( matches, winner, looser);

}