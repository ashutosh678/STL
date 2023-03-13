#include<bits/stdc++.h>
using namespace std;

// vectors are dynamic array that can grow or shrink in size

int main(){

    vector<int>a;
    vector<int>b(5,10);//there are 5 integers and their values are 10;
    vector<int>c(b.begin(),b.end());
    // vector<int>d{1,2,3,10,14};

    //look at how we can iterate over the vector

    for(int i=0;i<c.size();i++){
        cout<< c[i] << ",";
    }
    cout<<endl;

    for(auto it =b.begin();it!=b.end();it++){   // auto can be replaced by vector<int> :: iterator
        cout<< (*it) <<",";
    }
    cout<<endl;

    //For each loop
    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;

    //Discuss more function
    vector<int>v;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);  //add the element to the end of the vector v by doubling the size of the vector
    }

    for(int x:v){
        cout<<x<<",";
    }
    cout<<endl;
    
    // Understand at memory level, what are the differences in the two 
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;   //size of underlying array
    cout<<v.max_size()<<endl;   //maximum no of elements a vector can hold in the worst case acc to avalaible memory in the system
    
    
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;   //size of underlying array
    cout<<d.max_size()<<endl;   //maximum no of elements a vector can hold in the worst case acc to avalaible memory in the system


    return 0;
}