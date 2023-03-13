#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // int arr[]={20,30,40,50,100,1100};
    int arr[]={20,30,40,40,40,50,100,1100};
    int n= sizeof(arr)/sizeof(int);
    //Search in a sorted array
    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }

    //Two more things
    // Get the index of the element
    // lower_bounds(s,e,key) and upper_bounds (s,e,key)

    auto lb= lower_bound(arr,arr+n,40);      //lower bound gives first element that is greater than equal to key
    cout<<endl<<"Lower bound of 40 is "<<(lb-arr)<<endl;    // it gives the index of first elelment that is >= key (ex. if key=41 then it will give the index of 50)

    if ((lb-arr)==n){
        cout<<"Element is not present"<<endl;
    }

    //upper bound method

    auto ub= upper_bound(arr,arr+n,40);      //upper bound gives strictly greater than key
    cout<<endl<<"upper bound of 40 is "<<(ub-arr)<<endl;    //gives the index of 50 one index greater than the last index of 40 

    // upper bound - lower bound gives the no of elements of key

    cout << "Occ freq of 40 is "<<(ub-lb)<<endl;

}