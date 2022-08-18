/*
Pair Target Sum Problem
Find whether there exist 2 numbers that sum to K.

Brute Force approach

Time Complexity: O(N^2)
Space Complexity: O(1)
*/


#include<iostream>
#include<climits>
using namespace std;

bool PairSum(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, k;
    cout<<"Enter no of element n and Target Sum: ";
    cin>>n>>k;
    int arr[n];
    cout<<"array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bool ans=PairSum(arr,n,k);
    cout<<ans<<endl;
   
    return 0;
}