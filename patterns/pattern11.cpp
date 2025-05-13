#include<iostream>
using namespace std;

int main(){
    //char ch='A';
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'; // replace char count=ch;
        while (col<=row){
            cout<<ch;
            ch+=1;  //not required
            col+=1;
        }
        //ch+=1;
        cout<<endl;
        row+=1;
    }
}
// if green followed a bb ccc etc
