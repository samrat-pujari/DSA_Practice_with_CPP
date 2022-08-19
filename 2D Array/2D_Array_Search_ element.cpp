#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter Dimentions of 2D array: ";
    cin>>n>>m;
    int array[n][m];
    cout<<"Enter Elements of "<<n<<"x"<<m<<" dimentional array\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    cout<<"2D array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int k;
    cout<<"Enter Number to Search in 2D array: ";
    cin>>k;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]==k){
                cout<<"Coordinates of Search Element is: "<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag=true){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element Not found"<<endl;
    }
}