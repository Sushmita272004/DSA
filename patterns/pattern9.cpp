#include<iostream>
using namespace std;

int main(){
    //step 1
    int n;
    cin>>n;
    int row=1;
    while (row<=n){
        char ch='A'; // if this in step 1 then abc def ghi for n=3
        int col=1;
        while(col<=n){
            cout<<ch;
            ch+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}