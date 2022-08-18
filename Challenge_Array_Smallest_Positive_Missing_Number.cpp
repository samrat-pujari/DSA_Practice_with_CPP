/*

Arrays Challenge - Smallest Positive Missing Number

(Amazon, Samsung, Snapdeal, Accolite)

Problem
Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2
Intuition
If in O(1), we can tell if an element is present in an array, then our task will be
simpler.
For that, we will maintain a Check[ ] array, that will if an element x is present in
the array or not.
It will be of boolean type as we only need to check the presence or absence of the
number.

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter no of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int check[n];
    for(int i=0;i<n;i++){
        check[i]=false;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=true;
        }
    }
    for(int i=0;i<n;i++){
        if(check[i]==false){
            cout<<"Missing Smallest positive Number is: "<<i;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}