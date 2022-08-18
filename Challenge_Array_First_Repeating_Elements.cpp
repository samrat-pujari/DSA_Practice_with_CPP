/*
Given an array a of size N. The task is to find the first repeating element in the array of integers, 
i.e. an element that occurs more than once and whose index of first occurrence is smallest.

INPUT:
7
1 5 3 4 3 5 6 

OUTPUT:
2

EXPLANATION:
5 is appearing twice and its first appearance is at index is 2 which is less than 3 
whose 1st occuring index is 3. */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,5,3,4,3,5,6};
    int n=*(&arr+1)-arr;

    //const int N=1e6+2;   // size of the idx array N=1e6+2  means-10^6+2
    int idx[n];
    for(int i=0;i<n;i++){
        idx[i]=-1;      // store -1 in array
    }

    int minidx= INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]]!= -1){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"smallest index of repeating element(1 based indexing array): "<<minidx +1 <<endl;
    }
    
    return 0;
}