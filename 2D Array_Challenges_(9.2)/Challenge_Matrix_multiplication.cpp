/*
Challenge 2 - Matrix Multiplication
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000

Time Complexity: O(n1*n2*n3)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter Dimentions of Two 2D array n1,n2,n3: ";  // N1xN2 and N2xN3 
    cin>>n1>>n2>>n3;
    int arr1[n1][n2];
    int arr2[n2][n3];
    int ans[n1][n3]; // result of multiplication is stored in new N1xN3 array.
    cout<<"Enter Elements of First "<<n1<<"x"<<n2<<" dimentional array"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter Elements of Second "<<n2<<"x"<<n3<<" dimentional array"<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>arr2[i][j];
        }
    }
    // save 0 to all elements of an ans array 
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }
    // multiplication of two arrays

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    cout<<"2D Array of Multiplied two matrix result"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}