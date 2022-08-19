#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int CurrentElement=arr[i];
        int j=i-1;
        while(arr[j]>CurrentElement && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=CurrentElement;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    
    int arr[]={8,1,4,6,3,7,2,5};
    int n=*(&arr+1)-arr;

    InsertionSort(arr,n);
}