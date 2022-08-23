#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="HelloSamrat";
    string s=s1.substr(5,6);  // using substr() we can print substring which we want. 5 starting 6 is ending.
    cout<<s<<endl;
    return 0;
}