#include <iostream>
#include <queue>
using namespace std;

//queue follows an order based on some priority ---> priority is given by us

int main(){
    // priority_queue<int>pq;    //max priority queue
    priority_queue<int,vector<int>,greater<int> > pq;   //min priroty queue
    
    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        int no;
        cin>>no;
        pq.push(no);   // complexity = 0(logN)
    }

    //Remove the elements from the heap

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}