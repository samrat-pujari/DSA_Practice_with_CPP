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
}