#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;


//char *strtok(cahr *s,char *delimiters)
// returns a token on each subsequent call
// on the first call function should be passed with string argument for 's';
// on subsequent calls we should pass the string argument as null


int main(){

    char s[100]= "Today is a rainy day";
    
    char *ptr = strtok(s," ");
    cout<<ptr<<endl;


    while(ptr!=NULL){
    ptr = strtok(NULL," ");
    cout<<ptr<<endl;
    }

return 0;
}