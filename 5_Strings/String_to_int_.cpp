#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="123";
    int s=stoi(s1); // it will give us string to int number and we can easly do arithmatic operations on it.
    int b=s+2;
    cout<<s<<" -After addition s+2 : "<<b<<endl;
    return 0;
}