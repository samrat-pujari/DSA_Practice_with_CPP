/*
Maximum Sum Subarray Array
3. Kadane’s Algorithm:
Idea: Start taking the sum of the array, as soon as it gets negative, discard
the current subarray, and start a new sum.
Time Complexity: O(N)
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
    
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }

    cout<<"maximum sum of subarray is: "<<maxSum;

    return 0;
}