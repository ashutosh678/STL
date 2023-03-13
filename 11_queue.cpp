#include <iostream>
#include <queue>
using namespace std;

// queue follows FIFO ---> (first in, first out)   --> elements are added from the rearer side of the container

int main(){
    queue<int> q;

    for(int i=0;i<=5;i++){
        q.push(i);
    }   

    while(!q.empty()){
        cout<< q.front()<<" <-";
        q.pop();
    }
}