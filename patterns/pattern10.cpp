#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        char count=ch;
        int col=1;
        while(col<=n){
            cout<<count;
            col+=1;
            count+=1;
        }
        cout<<endl;
        row+=1;
        ch+=1;
    } 
}