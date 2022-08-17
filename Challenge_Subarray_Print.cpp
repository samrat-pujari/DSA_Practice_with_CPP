#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//number of subarray will be n*(n+1)/2


void Sum_Subarray_Print(int arr[],int n){
    vector<vector<vector<int>>> subarray;
    int sum;
    for(int i=0;i<n;i++){
        //sum=0;
        vector<int>sub;
        vector<vector<int>>subarr;        
        for(int j=i;j<n;j++){
            sub.push_back(arr[j]);
            subarr.push_back(sub);
            //sum +=arr[j];
            //cout<<sum<<endl;
            //cout<<"start"<<endl;
        }
        //cout<<"end"<<endl;
        subarray.push_back(subarr);
        //sub.clear();

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<subarray[i].size();j++){
            cout<<"[";
            for(int k=0;k<subarray[i][j].size();k++){
                cout<<subarray[i][j][k]<<" ";
                
            }
            //cout<<subarray[i][j]<<" ";
            cout<<"]"<<endl;
        }
        cout<<endl;
    }
    
}

int main(){
    int arr[]={1,2,3,4};
    int n=*(&arr+1)-arr;
    Sum_Subarray_Print(arr,n);
}