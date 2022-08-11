#include<iostream>
using namespace std;

void Bubble_Sort(int array[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }            
        }
        counter++;
    }
    
    cout<<"Sorted Elements of array: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter No. Of elements in array: ";
    cin>>n;
    int array[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
   
    Bubble_Sort(array,n);
}