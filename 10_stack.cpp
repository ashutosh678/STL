#include<iostream>
#include<stack>
using namespace std;

// stack follows leaf order ----> LIFO  (last in, first out)  ---> element inserted last will be out first
// push()
// pop() 
// top()
// empty()

int main(){

    stack<int> s;

    for(int i=0; i<=5;i++){
        s.push(i);   //used to push or insert an element at the top of the stack container.
    }

    //Loop
    while(!s.empty()){
        cout<<s.top()<<" ,";
        s.pop();   //The element is removed from the stack container and the size of the stack is decreased by 1
    }

    
}