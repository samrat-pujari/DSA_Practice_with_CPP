#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="samratHellosamratHellosamrat";
    cout<<s1<<endl;
    s1.erase(3,3); // first 3 indicates start point from where we want to erase and second 3 indicates end of erase (ie. 3 elements from start).
    cout<<s1<<endl;
    return 0;
}