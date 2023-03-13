#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(10);
    int k=1;
    for(int i=0;i<10;i++){
        v[i]=k;
        k++;
    }
    int i;
    int l=0,h=10;
    while (l<=h){
        int mid=(l+h)/2;
        if(v[mid]<6){
            l=mid+1;
        }
        else if(v[mid]>6){
            h=mid-1;
        }
        else{
            cout<<mid;
            break;
        }


    }
}