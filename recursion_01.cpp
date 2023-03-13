// input is given print the counting

#include<bits/stdc++.h>
using namespace std;

void getCounting(int n){

    //Base condition
    if(n<=0){
        return;
    }

    cout<<n<<endl;

    //subproblem or recursive call
    getCounting(n-1);
}

int main(){
    int n;
    cout<<"Please Enter the input"<<endl;
    cin>>n;

    cout<<"Counting: "<<endl;
    getCounting(n);
}