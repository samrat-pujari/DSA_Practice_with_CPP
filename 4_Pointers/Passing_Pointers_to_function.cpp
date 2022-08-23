#include<iostream>
using namespace std;

/* call by value function below */
void increment(int a){ // this is a local variable for function.
    a++; // we are able to increment the value of local variable.
}

/* call by refrece function below */
void swap(int *b,int *c){  // we have to initiallize pointer if we are receiving pointrs.
    int temp=*b;
    *b=*c;
    *c=temp;
}

int main(){
    int a=10;
    increment(a);
    cout<<a<<endl;
    /*  her we are passing value of variable a to function hence incremented value will not print. */
    
    /* Below code is for passing pointers to function  (we are sending call by refrence insted of sending values)*/   
    // we are sending address of variables using pointer hence we are able swap the value of original variables.
    int b=10;
    int c=20;
    int *bp=&b;
    int *cp=&c;
    swap(bp,cp);  // here we are sending address of variable b and c using pointers.
    //swap(&b,&c); // we can also send directly address of variables without creating pointers but in function we have to initiaize pointers.
    cout<<b<<" "<<c<<endl;  // we are able print swaped values becouse of pointers 

    return 0;
}