#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(j>=6-i and j<=4+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}