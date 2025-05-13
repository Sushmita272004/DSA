#include<iostream>
using namespace std;

int main(){
    char ch='A';
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<ch;
            col+=1;
        }
    cout<<endl;
    ch+=1;
    row+=1;
    }
}