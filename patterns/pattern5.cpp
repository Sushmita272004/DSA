#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row; // if col 1 12 123 1234
            col+=1;
        }
    cout<<endl;
    row+=1;
    }
}