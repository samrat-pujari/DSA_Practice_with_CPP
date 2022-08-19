#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
	int count=1;
	while(count<n){
		for(int i=0;i<n-count;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i]= arr[i+1];
				arr[i+1]=temp;
			}
		}
		count++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n=8;
	int arr[n]={80,40,20,30,10,50,70,60};
	bubblesort(arr,n);
}