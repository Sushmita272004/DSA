#include<iostream>
using namespace std;

int main(){
    int row=1;
    int n;
    cin>>n;
    while(row<=n){
        if (row%2==0){
            int col=n;
            while(col>=1){
                cout<<col;
                col-=1;
            }
        }
        else{
            int col=1;
            while(col<=n){
                cout<<col;
                col+=1;
            }

        }
    cout<<endl;
    row+=1;
    }
    
}
