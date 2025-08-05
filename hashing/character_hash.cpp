#include<iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin>>s;

    int hash[256] = {0};  // if hash[26]
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;     //hash[s[i]-'a']++; // for lowercase letters only
    }

    int z;
    cout<<"enter the no. of queries: ";
    cin>>z;
     while(z--){
        char c;
        cout << "Enter a character to check its frequency: ";
        cin>>c;

        cout<<hash[c] << endl;  //hash[c -'a'] << endl; 
     }
}