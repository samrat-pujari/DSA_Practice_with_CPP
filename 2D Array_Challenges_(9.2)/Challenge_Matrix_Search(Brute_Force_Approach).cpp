/*
Challenge 3 - 2D matrix Search
Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000

Sample Test Case:
Consider the following matrix:
[
[1, 4, 7, 11, 15],
[2, 5, 8, 12, 19],
[3, 6, 9, 16, 22],
[10, 13, 14, 17, 24],
[18, 21, 23, 26, 30]
]
Given target = 5, return true.

Given target = 20, return false.

Time complexity : O(N*M)
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter Dimentions of 2D array: ";
    cin>>n>>m;
    int array[n][m];
    cout<<"Enter Elements of "<<n<<"x"<<m<<" dimentional array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    int key;
    cout<<"Enter Target Key: ";
    cin>>key;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(array[i][j]==key){
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}