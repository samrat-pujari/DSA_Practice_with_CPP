#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Lenght of sentence: ";
    cin>>n;
    cin.ignore();
    char array[n+1];
    cout<<"Enter Sentence: ";
    cin.getline(array,n);
    cin.ignore();

    int i=0;
    int currentlen=0, maxlen=0;
    int start=0, maxstart=0;
    while(1){
        
        if(array[i]==' ' || array[i]=='\0'){
            if(currentlen>maxlen){
                maxlen=currentlen;
                maxstart=start;
            }
            currentlen=0;
            start=i+1;            
        }
        currentlen++;
        if(array[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<"max length of word is: "<<maxlen<<endl;
    cout<<"largest word is: ";
    for(int i=0;i<maxlen;i++){
        cout<<array[i+maxstart];
    }
    cout<<endl;
    return 0;
}