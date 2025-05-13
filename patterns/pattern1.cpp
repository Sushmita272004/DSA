//123 123 123 
#include<iostream>
using namespace std;

int main(){
    int n;
    int row=1;
    cin>>n;
    while (row<=n){
        int col=1;
        while (col<=n){
            cout<<col;
            col=col+1;
        }
    cout<< endl;
    row=row+1;
    }
}