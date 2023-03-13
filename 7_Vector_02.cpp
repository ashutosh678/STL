#include<iostream>
#include<vector>

using namespace std;

int main(){

    //you can create and initialise a vector

    vector<int> d{1,2,3,10,14};
    
    //push back0(1) for most of the time ---> Time Complexity
    d.push_back(16);


    //pop Back / Removes the last element 0(1)
    d.pop_back();

    //Insert some elememts in the middle 
    //                   after 3rd element add 1000
    d.insert(d.begin() + 3,1000);
    //                   after 3rd element add 1000 4 times
    d.insert(d.begin() + 3,4,1000);

    //erase some element in the middle its index starts from 0
    d.erase(d.begin()+3);

    //erase some range of elements
    d.erase(d.begin()+2,d.begin()+5);

    //size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid the shrink
    d.resize(18);   // if the size is increasing then more memory will be allocated
    cout<<d.capacity()<<endl;

    //remove all the vector, doesn't delete the memory occupied by the array
    d.clear();
    cout<<d.size()<<endl;

    //empty 
    if(d.empty()){
        cout<<"This is an empty vector";
    }
    cout<<d.size()<<endl;


    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;

    
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);

    cout<<d.front()<<endl; // gives the first element
    cout<<d.back()<<endl;  // gives the last element

    //Reserve
    int n;
    cin>>n;
    vector<int>v;

    //To avoid doubling, we will use reserve function
    v.reserve(1000);



    for (int i = 0; i < n; i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing capacity "<<v.capacity()<<endl;
    }
    cout<<"capacity "<<v.capacity()<<endl;

    for(int x:v){
        cout<<x<<",";
    }
    





    return 0;

}