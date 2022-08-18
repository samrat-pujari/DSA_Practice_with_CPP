/*
Pair Target Sum Problem
Find whether there exist 2 numbers that sum to K.

Important: The Array should be sorted for two pointer approach.
Idea: keep a low and high pointer, decide which pointer to move on the basis of
arr[low] + arr[high].

Time Complexity: O(N)
Space Complexity: O(1)

*/


#include<iostream>
#include<climits>
using namespace std;

bool PairSum(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
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