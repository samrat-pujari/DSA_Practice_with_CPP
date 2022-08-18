#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"no of element: ";
    cin>>n;
    int arr[n];
    cout<<"array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"All Possible subarrays"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}