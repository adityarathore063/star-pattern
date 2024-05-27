#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(i%2==0){
                if(j>=6-i and j<=4+i and j%2==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j>=6-i and j<=4+i and j%2==1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}