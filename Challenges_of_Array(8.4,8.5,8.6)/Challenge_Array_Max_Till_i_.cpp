#include<iostream>
using namespace std;


void MaxTill_I(int arr[],int n){
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<"Current Max num is: "<<mx<<endl;
    }
    
}

int main(){
    int arr[]={4,2,1,3,5};
    int n=*(&arr+1)-arr;
    MaxTill_I(arr,n);
}