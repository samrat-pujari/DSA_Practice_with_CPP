/*
Arrays Challenge-Subarray with given sum
(Google, Amazon, Facebook, Visa)

Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s; // n= number of array elements  s= sum of sub array
    cout<<" Enter N elements And S sum of Subarray: ";
    cin>>n>>s;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i=0, j=0, start=-1, end=-1, sum=0;
    while(j<n && sum+arr[j]<=s){
        sum+=arr[j];
        j++;
    }
    if(sum==s){
        cout<<"Sum of Subarray with Start and End index (1 based indexing)"<<endl;
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum+=arr[j];
        while(sum>s){
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            start=i+1;
            end=j+1;
            break;
        }
        j++;
    }
    cout<<"Sum of Subarray with Start and End Endex (1 based indexing)"<<endl;
    cout<<start<<" "<<end<<endl;

    return 0;
}