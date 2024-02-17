#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> heights = {4,2,7,6,9,14,12};
    int bricks = 5, ladders = 1;
    int index = 0;
    for(int i= 0; i<heights.size()-1; i++){
        int diff = heights[i+1]-heights[i];
        if(diff <0){
            index = i+1;
            continue;
        }else if(diff<=bricks){
            index = i+1;
            bricks -= diff;
        }else if(ladders >0){
            index = i+1;
            ladders -= 1;

        }else if(diff > bricks && ladders<=0){
            cout<<index;
            break;
        }else if(bricks <=0 && ladders<=0){
            cout<<index;
            break;
        }
    }
}