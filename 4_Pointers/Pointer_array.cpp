#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40};
    cout<<*arr<<endl; // arr has initialy 0 index.

    int *ptr=arr; // we cant store its address using & , becouse array point 0 initialy.
    for(int i=0;i<4;i++){
        //cout<<*arr<<endl;  // it prints only index 0 element we cannot incriment by arr++; its ilegal insted we can add value ex. *(arr+1).
        cout<<*ptr<<endl;
        *ptr++;
    }
}