#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of characters in array: ";
    cin>>n;
    char array[n+1];
    cout<<"Enter Word: ";
    cin>>array;

    bool check=1;
    for(int i=0;i<n;i++){
        if(array[i]!=array[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"Yes word is palindrome"<<endl;
    }
    else{
        cout<<"Word is not palindrome"<<endl;
    }
    return 0;
}