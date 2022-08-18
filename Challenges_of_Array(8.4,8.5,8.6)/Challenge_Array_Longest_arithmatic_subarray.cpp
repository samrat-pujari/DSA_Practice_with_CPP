/* PROBLEM STATEMENT :
An arithmatic array is an array that contains at least two integers and the difference between 
consecutive integersare equal. For example: [9,10],[3,3,3] and [9,7,5,3] are arithmatic arrays,
while [1,3,3,7],[2,1,2] and [1,2,4] are not arithmatic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She wants to 
choose a contiguous arithmatic subarray from her array that has the maximum length. Please help her to 
determine the length of the longest contiguous arithmatic subarray.

Input: The first line of the input gives the number of the test cases, T.T  test cases follow. Each  
test case begins with a line containing the integer N. The second line contains N integers. The i-th
integer is A.

Output: For each test case , output one line containing Case #x:y, where x is the test case number
(starting from 1) and y is the length of the longest contiguous arithmatic subarray.*/

#include<iostream>
using namespace std;

int main(){
    int a[]={10,7,4,6,8,10,11};
    int n=*(&a+1)-a;

    int ans=2;         //Final Answer
    int pd=a[1]-a[0];  //priveous comman defference
    int j=2;
    int current=2;

    while(j<n){
        if(pd==a[j]-a[j-1]){
            current++;
        }
        else{
            pd=a[j]-a[j-1];
            current=2;
        }
        ans=max(ans,current);
        j++;
    }
    cout<<ans<<endl;
    
    return 0;
}