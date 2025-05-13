#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    char ch1=ch+n-1;
    while(row<=n){
        char count=ch1;
        int col=1;
        while(col<=row){
            cout<<count;
            count+=1;
            col+=1;
        }
        cout<<endl;
        ch1-=1;
        row+=1;
    }
}
