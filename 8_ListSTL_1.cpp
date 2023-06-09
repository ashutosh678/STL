#include<iostream>
#include<list>

using namespace std;

    //list is useful in case of insert or delete data from front or middle
    //push-back
    //push-front
    //pop-front
    //insert
    //erase (idx)
    //remove(2)

int main(){
    list<int>l;

    //Init
    list<int> l1{1,2,3,10,8,5};

    //Different Datatype
    list<string> l2{"apple", "guava","mango", "banana" };
    l2.push_back("pineapple");

    //sort
    l2.sort();

    //reverse
    l2.reverse();

    //pop_front   --> Removes the first element
    cout<<l.front()<<endl;
    l2.pop_front();

    //add to the front of the list
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();



    //Iterate over the list and print the data
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<" -> ";
    }
    cout<<endl;

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;


    //some more function sin the list
    l2.push_back("orange");
    l2.push_back("lemon");
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    //remove a fruit 
    string f;
    // cin>>f;
    // l2.remove(f);

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    //erase one or more elements
    auto it= l2.begin();
    it++;
    it++;
    l2.erase(it);

    for (string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    //we can insert elements in the list
    it=l2.begin();
    it++;
    l2.insert(it,"FruitJuice");

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;


}