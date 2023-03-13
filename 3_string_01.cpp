#include<iostream>
#include<string>
using namespace std;

int main(){


    //string init
    string s0;
    string s1("Hello");

    string s2="Hello World";
    string s3(s2);

    string s4 = s3;

    char a[]={'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"s0 is an empty string\n";
    }

    //Append
    s0.append("I love c++");
    cout<<s0<<endl;
    s0 += " and Python";

    cout<<s0<<endl;

    //Remove 
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    //compare two strings

    s0="Apple";
    s1="Mango";
    cout<< s0.compare(s1) << endl;    //returns an integer   ==0 equal ,<0 if s0 is lexiographically smaller than mango 
    cout<< s1.compare(s0) << endl;    //returns an integer   ==0 equal ,>0 if s0 is lexiographically smaller than mango 



    cout<<s1[0]<<endl;

    //Find substrings
    string s= "I want to have apple juice";
    int idx = s.find ("apple");
    cout<<idx<<endl;

    //remove a word from a string
    string word = "apple";
    int len= word.length();
    cout<<s<<endl;
    s.erase(idx,len);
    cout<<s<<endl;



    //Iterate over all the characters in the string
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<":";
    }
    cout<<endl;

    //Iterators
    for(auto it= s.begin();it != s.end();it++){          
        cout<<(*it)<<",";
    }

    //for each loop
    for(auto c:s1){        //auto automatically defines a data type to the variable depending upon the data stored in it
        cout<<c<<".";
    }






}