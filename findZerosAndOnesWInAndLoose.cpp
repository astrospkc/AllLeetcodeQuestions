#include<bits/stdc++.h>
using namespace std;

void winLoose(vector<vector<int>>& matches, map<int, int>& winner, map<int, int>& looser){

    for(int i=0; i<matches.size(); i++){
        if(winner.find(matches[i][0]) != winner.end()){
            winner[matches[i][0]] +=1;
        }else{
            winner[matches[i][0]] == 1;
        }
    }

    for(int i=0; i<matches.size(); i++){
        if(looser.find(matches[i][1]) != looser.end()){
            looser[matches[i][1]] +=1;
        }else{
            looser[matches[i][0]] == 1;
        }
    }
}

int main(){
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};

    map<int, int> winner;
    map<int, int> looser;

    winLoose(matches, winner, looser);
    vector<vector<int>> answer;
    vector<int> win;
    vector<int> loose;

    for(auto& pair : winner){
        if(winner.find(pair.first) == winner.end()){
            win.push_back(pair.first);
        }
    }
    answer.push_back(win);

    for(auto& pair:looser){
        if(pair.second == 1){
            loose.push_back(pair.first);
        }
    }

    answer.push_back(loose);

    for(int i=0; i<answer.size(); i++){
        for(int j =0; j<answer[i].size(); j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }

}