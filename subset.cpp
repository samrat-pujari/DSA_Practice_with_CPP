#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void find(vector<int> nums,vector<int> output,int index, vector<vector<int>>& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    find(nums,output,index+1,ans);

    int element = nums[index];
    output.push_back(element);
    find(nums,output,index+1,ans);
}

vector<vector<int>> subset(vector<int>&num){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    find(num,output,index,ans);
    return ans;
}


int main(){
    int n=0;
    cin>>n;
    int a=0;
    vector<int>array;
    for(int i=0;i<n;i++){
        cin>>a;
        array.push_back(a);
    }
    // vector<int> array={1,2,3,4};
    vector<vector<int>> output=subset(array);

    // print output
    for (int i = 0; i < output.size(); i++) {
		for (int j = 0; j < output[i].size(); j++)
			cout << output[i][j] << " ";
		cout << endl;
	}

}