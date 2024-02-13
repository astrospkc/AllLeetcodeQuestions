#include<bits/stdc++.h>
using namespace std;

int main(){
    int m , n;

    cin>>m>>n;
    int i = 1<<n;

    int res = m | i;
    cout<<res;
    
}