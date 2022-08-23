#include<iostream>
using namespace std;

int main(){
    string str1;
    // /*cin>>str1;*/  getline(cin,str1); // using getline we can take complete sentence input (include space also) ex- Samrat Pujari   
    //
    cout<<str1<<endl;;
    string str="abcd";
    cout<<str<<endl;
    //
    string str2(5,'n'); // str2={nnnnn} initialize string with 5 times n.
    cout<<str2<<endl;

    // string append
    string a="sam";
    string b="rat";
    a.append(b);  // we can also use a+b to print string
    cout<<a<<endl; // we can also use a+b to print concatinated string

    // Accessing single character form string
    cout<<a[0]<<endl;
    // to remove complete string use clear.
    str.clear();
    cout<<str<<endl;

    //compare two string
    string s1="abc";
    string s2="xyz";    
    cout<<s1.compare(s2)<<endl;
    if(s1.compare(s2)==0){
        cout<<"Strings are Equal"<<endl;
    }
    else{
        cout<<"Strings are not Equal"<<endl;
    }


    return 0;
}