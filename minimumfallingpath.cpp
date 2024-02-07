// #include<bits/stdc++.h>
// using namespace std;

// void down(int row, int ptr, int col, vector<vector<int>> matrix, int& sum){
//     if(row == matrix.size()){
//         return;
//     }

//     sum += matrix[row][col];
//     row += 1;
//     down(row, ptr, col, matrix, sum);


// }

// void leftdown(int row, int ptr, int col, vector<vector<int>> matrix, int& sum){
//     if(row == matrix.size()){
//         return;
//     }
//     if(col-1>0){
//         sum += matrix[row][col];
//         leftdown(row +1, ptr, col-1,matrix, sum );
//     }
    
// }
// void rightdown(int row, int ptr, int col, vector<vector<int>> matrix, int& sum){
//     if(row == matrix.size()){
//         return;
//     }
//     if(col+1 < matrix[row].size()){
//         sum += matrix[row][col];
//         rightdown(row +1, ptr, col+1, matrix, sum);
//     }
// }


// int main(){
//     vector<vector<int>> matrix = {{2,1,3},{6,5,4},{7,8,9}};
//     int n = matrix[0].size();
//     vector<int> dp(n,0);
//     int sum =0;
//     for(int i=0; i<matrix[0].size(); i++){

//         dp[i] = min(down(0,i, i, matrix, sum), (leftdown(0,i,i,matrix, sum), rightdown(0, i,i,matrix, sum )));
        
//     }
//     cout<<min(dp);
// }