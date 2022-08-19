#include<iostream>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    // int c=n-1;
    // if (n!=c){
    //     cout<<c;
    // }
    //cout<<c;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        cout<<array[i];

        if (i>=n-1){
            break;
        }
        else{
            cout<<",";
        }
        
    }

    // int array[4];
    //array[0]=20;
    //array[1]=30;
    //cout <<array[3]<< endl;
}
