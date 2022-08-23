#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="samratHellosamratHellosamrat";
    cout<<s1<<endl;
    int a=s1.size(); // Size() and length() Both function return size of string. 
    int b=s1.length();
    cout<<a<<" "<<b<<endl; 
    // use full in itrating the string.
    for(int i=0;i<s1.size();i++){
        cout<<s1[i]<<endl;
    }
    return 0;
}