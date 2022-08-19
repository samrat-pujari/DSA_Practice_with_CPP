#include<iostream>
using namespace std;

int printArray1(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if (i>=n-1){
            break;
        }
        else {
            cout<<",";
        }
       // return arr[i];
    }
    
}

int main(){
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray1(arr,n);
}