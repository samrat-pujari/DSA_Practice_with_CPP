#include<iostream>
using namespace std;

void SelectionSort(int array[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
            
        }
    }
    cout<<"Sorted elements of array: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    SelectionSort(array,n);

}