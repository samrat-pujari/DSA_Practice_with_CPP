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

    // Spiral traversal and Print 

    int row_start=0, row_end=n-1;
    int colm_start=0, colm_end=m-1;

    while(row_start<=row_end &&colm_start<=colm_end){
        // for row start
        for(int col=colm_start;col<=colm_end;col++){
            cout<<array[row_start][col];
        }
        row_start++;
        // column start
        for(int row=row_start;row<=row_end;row++){
            cout<<array[row][colm_end];
        }
        colm_end--;
        // for reverse row 
        for(int col=colm_end;col>=colm_start;col--){
            cout<<array[row_end][col];
        }
        row_end--;
        // for reverse column
        for(int row=row_end;row>=row_start;row--){
            cout<<array[row][colm_start];
        }
        colm_start++;
    }
}