#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        while(n>0 && x/2+10<x){
            x=x/2 +10;
            n--;
        }
        x=x-m*10;
        if(x<=0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}