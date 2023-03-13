#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,c,m,x;
    cin>>q;
    while(q--){
        cin>>c>>m>>x;
        cout<<min(min(c,m),(c+m+x)/3)<<endl;
    }

}