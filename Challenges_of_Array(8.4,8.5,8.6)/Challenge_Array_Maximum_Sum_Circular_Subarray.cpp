/*
Maximum Sum Circular Subarray:
Idea: There will 2 cases,
****See Document*****
To get the Min subarray we multiply the array by -1 and get the maximum sum
subarray.
Time Complexity: O(N)
*/


#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int currentSum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        mx=max(mx,currentSum);
    }
    return mx;
}

int main(){
    int n;
    cout<<"no of element: ";
    cin>>n;
    int arr[n];
    cout<<"array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);

    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum= totalSum + kadane(arr,n);     // - - become + // here in kadane function call we will get non cotrubuting elements sum.
    
    cout<<max(wrapsum,nonwrapsum)<<endl;
   
    return 0;
}