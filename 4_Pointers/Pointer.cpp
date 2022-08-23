#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr=&a;      // & operator provides address of variable a

    cout<<*aptr<<endl;  // access variable a
    *aptr=20;           // update variable value
    cout<<a<<endl;     

    cout<<aptr<<endl;   //print address of variable a
    aptr++;
    cout<<aptr<<endl;  //print incrimented address of variable a // it skips 4bytes becouse int has 4byte address.
                       // supose address of a is 2000 after incriment it will become 2004.
    // ** for charecter **
    char b='A';
    char *cptr=&b;
    cout<<cptr<<endl; // address of b
    cptr++;
    cout<<cptr<<endl; // incrimented address of b // and becouse char takes 1byte it will print incrimented address without skip.
    return 0;
}