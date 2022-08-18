/*
Maximum Sum Subarray Array
2. Prefix Sum Technique:
Idea: For each subarray arr[i..j], calculate its sum. Using prefix sum can
reduce time to calculate the sum of arr[i..j] to O(1)
Time Complexity: O(N2
)
Space Complexity: O(N)

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
    
    int cumsum[n+1];
    cumsum[0]=0;
    for(int i=1;i<=n;i++){
        cumsum[i]=cumsum[i-1]+arr[i-1];
    }
    int mx=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=cumsum[i]-cumsum[j];
            mx=max(sum,mx);
        }
    }
    cout<<"maximum sum of subarray is: "<<mx;

    return 0;
}