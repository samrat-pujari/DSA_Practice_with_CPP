#include<iostream>
using namespace std;

int BinarySearch(int Array[],int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(Array[mid]==key){
            return mid;
        }
        else if(Array[mid]>key){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter Lenght of array:";
    cin>>n;
    int Array[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>Array[i];
    }
    int key;
    cout<<"Enter element to be Search: ";
    cin>>key;
    cout<<"index of key element present in Array / return -1 if not found\n"<<BinarySearch(Array,n,key);
}