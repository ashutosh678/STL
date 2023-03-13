#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    // ***Canteen***
    // Maggi   -->   20RS
    // juice   -->   25RS
    // Pepsi   -->   35RS
    //   ||           ||
    // Keys          Value

    // insert(k,v)  --->  insert()
    // query(k)     --->  find()
    // delete(k)    --->  erase()

    // Maps maintain self balancing , keys are ordered k

    map<string,int>m;

    //Insert
    m.insert(make_pair("Mango",100));

    pair<string,int>p;
    p.first ="Apple";
    p.second=120;

    m.insert(p);

    m["Banana"]=20;

    //search
    string fruit;
    cin>>fruit;

    auto it=m.find(fruit);
    if(it!=m.end()){
        cout<<"Price of "<<fruit<<"is "<<m[fruit]<<endl;
    }
    else{
        cout<<"FRUIT is not present\n";
    }

    //update the price
    m[fruit] += 22;

    //3. Erase
    m.erase(fruit);

    //another way to find a particular map
    // it stores unique keys only once    --> if we input new value of[banana] -> it will change the old value instead of making a new key
    if(m.count(fruit)){
        cout<<"Price is "<<m[fruit]<<endl;
    }
    else{
        cout<<"Couldn't find "<<endl;
    }

    m["Litchi"] = 60;
    m["Pineapple"] = 80;
    //Iterate over all the key value pairs

    for (auto it = m.begin();it!=m.end();it++){  //it contains pair value to access the value use(*it).first   or   it->first
        cout<<it->first<<" and "<<it->second<<endl;
    }

    //for each loop
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }
}