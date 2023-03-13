//factorial
#include<bits/stdc++.h>
using namespace std;

int getFactorial(int n){
    //Base condition
    if(n<=1){
        return 1;
    }

    //subproblem or recursive call
    int aage_ka_factorial = getFactorial(n-1);

    //Final answer [ye bs 12 tak k liye hi kaam karega]

    int answer = n*aage_ka_factorial;
    return answer;
}

int main(){
    int n;
    cout<<"Please Enter the Input "<<endl;
    cin>>n;

    cout<<"Value of "<<n<<"! is "<<getFactorial(n)<<endl;
}