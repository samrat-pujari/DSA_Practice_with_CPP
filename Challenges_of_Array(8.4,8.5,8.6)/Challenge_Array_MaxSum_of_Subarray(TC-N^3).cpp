/*
Maximum Sum Subarray Array
1. Brute Force:
Idea: For each subarray arr[i..j], calculate its sum.
Time Complexity: O(N3
)
Space Complexity: O(1)

*/
#include<iostream>
#include<climits>
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
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            mx=max(mx,sum);
        }
    }
    cout<<"Maximum Sum of Subarray is: "<<mx<<endl;
    return 0;
}