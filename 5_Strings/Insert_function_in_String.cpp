#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="samratHellosamratHellosamrat";
    cout<<s1<<endl;
    s1.insert(0,"Geet"); // inserts Geet at starting index 0. 
    cout<<s1<<endl; 
    return 0;
}