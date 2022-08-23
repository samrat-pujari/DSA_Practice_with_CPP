#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p=&a;
    
    cout<<*p<<endl; // this pointer will print value of variable a. becouse we are d-referencing one time.

    int **q=&p;
    cout<<*q<<endl; // this will print address of pointer p. becouse we are d-referencing one time.
    cout<<**q<<endl; // this will print value of variable a. becouse we are d-referencing two times.

}