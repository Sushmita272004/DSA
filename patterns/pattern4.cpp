#include<iostream>
using namespace std;

int main(){
    int row=1;
    int n;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    
}