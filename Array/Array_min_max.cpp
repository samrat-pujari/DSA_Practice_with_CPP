#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i;i<n;i++){
        cin>>array[i];
    }

    int maxNo= INT_MIN;
    int minNo= INT_MAX;
    int max= INT_MAX;
    int min= INT_MIN;
    cout<<minNo<<endl;

    for(int i; i<n;i++){
        if(array[i]>maxNo){
            maxNo =array[i];
        }
        if(array[i]<minNo){
            minNo=array[i];
        }
    }

    cout<<"max number: "<<maxNo<<" & "<<"min number: "<<minNo<<endl;
    cout<<max<<"and"<<min<<endl;

}