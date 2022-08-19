/*
2D Array Challenges

Challenge 1 - Matrix Transpose
Problem
Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.

Constraints
1 <= N <= 1000

Sample Input1
A = [
[1,2,3],
[4,5,6],
[7,8,9]
]
N = 3

Sample Output1
A = [
[1,4,7],
[2,5,8],
[3,6,9]
]

Time complexity : O(N2)
Space complexity : O(1), as no extra space for a new matrix was used
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

    // transpose of Squre array
    //int result[n][m];  
    
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            //result[j][i]=array[i][j]; 
            int temp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=temp;
        }
    }
    // output
    cout<<"Transposed array output"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}