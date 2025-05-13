//321 321 321
#include<iostream>
using namespace std;

int main(){
    int n;
    int row =1;
    cin>>n;
    while (row<=n){
        int col=n;
        while(col>=1){
            cout<<col;
            col-=1;
        }
    cout<<endl;
    row+=1;
    }
}