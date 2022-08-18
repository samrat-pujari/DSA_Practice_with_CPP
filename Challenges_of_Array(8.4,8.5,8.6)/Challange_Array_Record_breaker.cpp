/*
Isyana is give the number of visitors at her local theme park on N consecutive days. The number
of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following 
conditions:

* The number of visitors on the day is strictly larger than the number of visitors on each
of the previous days.
* Either it is the last day, or the number of visitors on the day is strictly larger than the 
number of visitors on the following day.

Note that the very first day could be a record breaking day!

INPUT: The first line of the input gives the number of test cases, T.T test cases follow. Each test 
cases being with a line containing the integer N. The second line contains N integers. The 
i-th integer is Vi.

OUTPUT: For each test case, output on line containig Case #x:y, where x is the test case number 
(starting from 1) and y is the number of record breaking days.
*/

#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter No of Array Element: ";
    // cin>>n;
    // int arr[n+1];
    // arr[n]=-1;
    // cout<<"Enter Array elements: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int arr[]={1,2,0,7,2,0,2,2};
    int n=*(&arr+1)-arr;

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<ans<<endl;

    return 0;
}